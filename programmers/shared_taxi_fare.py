# 2021 카카오 블라인 코딩테스트 - 합승 택시 요금

import math


def solution(n, s, a, b, fares):
    s -= 1
    a -= 1
    b -= 1
    INF = math.inf
    answer = math.inf
    min_fee = [[INF for col in range(n)] for row in range(n)]

    for i in range(n):
        min_fee[i][i] = 0

    for fare in fares:
        start, end, fee = fare
        min_fee[start - 1][end - 1] = fee
        min_fee[end - 1][start - 1] = fee

    for k in range(n):
        for i in range(n):
            for j in range(n):
                if min_fee[i][j] > min_fee[i][k] + min_fee[k][j]:
                    min_fee[i][j] = min_fee[i][k] + min_fee[k][j]

    for i in range(n):
        if answer > min_fee[s][i] + min_fee[i][a] + min_fee[i][b]:
            answer = min_fee[s][i] + min_fee[i][a] + min_fee[i][b]

    return answer

