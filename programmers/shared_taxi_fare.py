# 2021 카카오 블라인 코딩테스트 - 합승 택시 요금

import math


def solution(n, s, a, b, fares):
    s -= 1
    a -= 1
    b -= 1
    INF = math.inf   # 무한대 표현
    answer = INF
    min_fee = [[INF for col in range(n)] for row in range(n)]

    # 자기 자신으로 가는 비용 0으로 초기화
    for i in range(n):
        min_fee[i][i] = 0

    # 주어진 비용으로 테이블 초기화
    for fare in fares:
        start, end, fee = fare
        min_fee[start - 1][end - 1] = fee
        min_fee[end - 1][start - 1] = fee

    # 플로이드 워셜 알고리즘으로 모든 노드 최단 경로 구하기
    for k in range(n):
        for i in range(n):
            for j in range(n):
                if min_fee[i][j] > min_fee[i][k] + min_fee[k][j]:
                    min_fee[i][j] = min_fee[i][k] + min_fee[k][j]

    # 시작점(s)에서 각각의 도착지(a, b)에 도착하는데 드는 최소 비용 구하기
    for i in range(n):
        if answer > min_fee[s][i] + min_fee[i][a] + min_fee[i][b]:
            answer = min_fee[s][i] + min_fee[i][a] + min_fee[i][b]

    return answer

