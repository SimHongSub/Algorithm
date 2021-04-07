# 가장 큰 정사각형 찾기

def solution(board):
    answer = 0
    row = len(board)
    col = len(board[0])

    if row <= 1 or col <= 1:
        return board[0][0]

    for i in range(col):
        if board[0][i] == 1:
            answer = 1
            break

    for i in range(1, row):
        for j in range(1, col):
            if board[i][j] > 0:
                up = board[i - 1][j]
                left = board[i][j - 1]
                upper_left = board[i - 1][j - 1]

                board[i][j] = min(up, left, upper_left) + 1

                answer = max(answer, board[i][j])

    return answer ** 2
