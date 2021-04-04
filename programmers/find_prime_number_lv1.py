# 소수 찾기 - level1

import math


def solution(n):
    answer = 0

    prime_numbers = [True] * (n + 1)

    mid = int(math.sqrt(n))

    for i in range(2, mid + 1):
        if prime_numbers[i]:
            answer += 1
            for j in range(2 * i, n + 1, i):
                prime_numbers[j] = False

    for i in range(mid + 1, n + 1):
        if prime_numbers[i]:
            answer += 1

    return answer