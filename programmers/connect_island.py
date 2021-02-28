# 그리디 : 섬 연결하기

def connect(node, connected):
    if connected[node] == node:
        return node

    connected[node] = connect(connected[node], connected)

    return connected[node]


def solution(n, costs):
    answer = 0
    connected = [i for i in range(n)]

    costs.sort(key=lambda x: x[2], reverse=True)

    while True:
        if len(set(connected)) == 1:
            break

        cost = costs.pop()
        if cost[0] > cost[1]:
            cost[0], cost[1] = cost[1], cost[0]

        if connect(cost[0], connected) != connect(cost[1], connected):
            answer += cost[2]
            if connected[cost[1]] > connected[cost[0]]:
                temp = connected[cost[1]]
                for i in range(n):
                    if connected[i] == temp:
                        connected[i] = connected[cost[0]]
            else:
                temp = connected[cost[0]]
                for i in range(n):
                    if connected[i] == temp:
                        connected[i] = connected[cost[1]]

    return answer


if __name__ == "__main__":
    print(solution(4, [[0,1,1],[0,2,2],[1,2,5],[1,3,1],[2,3,8]]))
    print(solution(5, [[0, 1, 5], [1, 2, 3], [2, 3, 3], [3, 1, 2], [3, 0, 4], [2, 4, 6], [4, 0, 7]]))

