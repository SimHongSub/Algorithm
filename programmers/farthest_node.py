# 그래프 : 가장 먼 노드

from collections import deque


def bfs(n, edges):
    edge_count = {i: 0 for i in range(1, n + 1)}
    graph = {i: [] for i in range(1, n + 1)}
    result, count = 0, 0

    for start, end in edges:
        graph[start].append(end)
        graph[end].append(start)

    q = deque(graph[1])

    while q:
        count += 1
        for i in range(len(q)):
            node = q.popleft()

            if edge_count[node] == 0 and node != 1:
                edge_count[node] = count
                for next_node in graph[node]:
                    q.append(next_node)

    max_value = max(edge_count.values())

    for value in edge_count.values():
        if value == max_value:
            result += 1

    return result


def solution(n, edge):
    answer = 0

    answer = bfs(n, edge)

    return answer


if __name__ == "__main__":
    edge = [[3, 6], [4, 3], [3, 2], [1, 3], [1, 2], [2, 4], [5, 2]]

    solution(6, edge)

