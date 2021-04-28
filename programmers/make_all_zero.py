# 모두 0으로 만들기

import sys

sys.setrecursionlimit(300000)


def dfs(child, parrent, graph, a, answer):
    for next in graph[child]:
        if next != parrent:
            answer = dfs(next, child, graph, a, answer)

    answer += abs(a[child])
    a[parrent] += a[child]
    a[child] = 0

    return answer


def solution(a, edges):
    answer = 0

    if sum(a) != 0:
        return -1

    graph = [[] for i in range(len(a))]

    for edge in edges:
        graph[edge[0]].append(edge[1])
        graph[edge[1]].append(edge[0])

    answer = dfs(0, 0, graph, a, answer)

    return answer
