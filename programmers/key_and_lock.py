# 열쇠와 자물쇠

def rotate(m):
    N = len(m)
    ret = [[0] * N for _ in range(N)]

    for r in range(N):
        for c in range(N):
            ret[c][N - 1 - r] = m[r][c]

    return ret


def solution(key, lock):
    answer = False
    M, N = len(key), len(lock)
    size = N + 2 * (M - 1)

    board = [[0] * size for _ in range(size)]

    for k in range(N):
        for z in range(N):
            board[(M - 1) + k][(M - 1) + z] = lock[k][z]

    for rotation in range(4):
        for i in range(size - M + 1):
            for j in range(size - M + 1):

                check = 0

                for k in range(M):
                    for z in range(M):
                        board[i + k][j + z] += key[k][z]

                for k in range(N):
                    for z in range(N):
                        if board[(M - 1) + k][(M - 1) + z] != 1:
                            check = 1
                            break

                    if check == 1:
                        break

                if check == 1:
                    for k in range(M):
                        for z in range(M):
                            board[i + k][j + z] -= key[k][z]
                else:
                    answer = True

                    break

            if answer:
                break

        if answer:
            break
        else:
            key = rotate(key)

    return answer
