# 두 정수 사이의 합

def solution(a, b):
    answer = 0

    if a == b:
        return a

    if a > b:
        a, b = b, a

    count = b - a + 1

    if count % 2 == 0:
        answer = (a + b) * count // 2
    else:
        answer = (a + b) * (count - 1) // 2
        answer += (a + b) // 2

    return answer
