# 동적계획법 : 등굣길

def solution(m, n, puddles):
    answer = 0
    way = [[0 for i in range(m + 1)] for j in range(n + 1)]
    way[1][1] = 1

    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if i == 1 and j == 1:
                continue

            if [j, i] not in puddles:
                way[i][j] = way[i - 1][j] + way[i][j - 1]

    answer = way[n][m] % 1000000007

    return answer


if __name__ == "__main__":
    print(solution(4, 3, [[2, 2]]))
