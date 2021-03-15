# 스택, 그리디 : 풍선 터트리기

def solution(a):
    answer = 0
    stack = [a[0], a[1]]

    for i in range(2, len(a)):
        number = a[i]

        while len(stack) > 1 and stack[-1] > number and stack[-1] > stack[-2]:
            stack.pop()

        stack.append(number)

    answer = len(stack)

    return answer


if __name__ == '__main__':
    print(solution([9, -1, -5]))
    print(solution([-16, 27, 65, -2, 58, -92, -71, -68, -61, -33]))
