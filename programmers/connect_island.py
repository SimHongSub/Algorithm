import sys


def solution(n, costs):
    answer = 0
    INF = sys.maxsize

    cost_map = [[INF for i in range(n)] for j in range(n)]

    for cost in costs:
        cost_map[cost[0]][cost[1]] = cost[2]
        cost_map[cost[1]][cost[0]] = cost[2]

    return answer
