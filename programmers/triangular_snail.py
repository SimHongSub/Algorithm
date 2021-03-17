# 삼각 달팽이

def solution(n):
    answer = []
    triangular = [[0 for i in range(n)] for j in range(n)]
    row, column = -1, 0
    number = 1

    for i in range(n):
        for j in range(i, n):
            if i % 3 == 0:
                row += 1
            elif i % 3 == 1:
                column += 1
            elif i % 3 == 2:
                row -= 1
                column -= 1

            triangular[row][column] = number

            number += 1

    for lst in triangular:
        lst = [item for item in lst if item != 0]
        answer += lst

    return answer


if __name__ == '__main__':
    print(solution(4))
    print(solution(5))
    print(solution(6))
