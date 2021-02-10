# 깊이/너비 우선 탐색(DFS/BFS) : 타겟 넘버

def dfs(index, value, numbers, target):
    answer = 0

    if value == target and index == len(numbers):
        return 1

    if index >= len(numbers):
        return 0

    answer += dfs(index + 1, value + numbers[index], numbers, target)
    answer += dfs(index + 1, value - numbers[index], numbers, target)

    return answer


def solution(numbers, target):
    answer = 0

    answer = dfs(0, 0, numbers, target)

    return answer

