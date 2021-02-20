# 깊이/너비 우선 탐색(DFS/BFS) : 네트워크

from collections import deque


def bfs(index, n, computers):
    network = 0
    visited = [index]
    q = deque()

    for i in range(n):
        if computers[index][i] == 1:
            q.append(i)
            computers[i][i] = 0
            computers[index][i] = 0
            computers[i][index] = 0

    while q:
        if network == 0:
            network = 1
        computer = q.popleft()
        if computer not in visited:
            visited.append(computer)

            for i in range(n):
                if computer != i and computers[computer][i] == 1:
                    q.append(i)
                    computers[i][i] = 0
                    computers[computer][i] = 0
                    computers[i][computer] = 0

    return network


def solution(n, computers):
    answer = 0

    for i in range(n):
        answer += bfs(i, n, computers)

    return answer
