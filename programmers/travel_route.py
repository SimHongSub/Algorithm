# 깊이/너비 우선 탐색(DFS/BFS) : 여행경로

def dfs(node, route, node_count, answer):
    stack = [node]

    while len(stack) > 0:
        node = stack[-1]

        if node not in route or len(route[node]) == 0:
            answer.append(stack.pop())
        else:
            stack.append(route[node].pop(0))


def solution(tickets):
    answer = []
    route = {}

    for ticket in tickets:
        if ticket[0] not in route:
            route[ticket[0]] = [ticket[1]]
        else:
            route[ticket[0]].append(ticket[1])

    for name in route.keys():
        route[name].sort()

    dfs('ICN', route, len(route), answer)

    answer.reverse()

    return answer


if __name__ == "__main__":
    solution([["ICN", "SFO"], ["ICN", "ATL"], ["SFO", "ATL"], ["ATL", "ICN"], ["ATL","SFO"]])
