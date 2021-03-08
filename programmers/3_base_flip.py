# 3진법 뒤집기

def solution(n):
    answer = 0
    th_base = ""
    i = 0

    while True:
        if n < 3:
            th_base += str(n)
            break

        th_base += str(n % 3)
        n = n // 3

    for num in reversed(th_base):
        answer += (3 ** i) * int(num)
        i += 1

    return answer


if __name__ == "__main__":
    print(solution(45))
    print(solution(125))
