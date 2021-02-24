# 그리디 : 큰 수 만들기

def solution(number, k):
    answer = ''
    stack = [number[0]]

    for num in number[1:]:
        while True:
            if len(stack) <= 0 or k <= 0:
                break

            if stack[-1] < num:
                stack.pop()
                k -= 1
            else:
                break

        stack.append(num)

    if k > 0:
        stack = stack[:-k]

    for digit in stack:
        answer += digit

    return answer
