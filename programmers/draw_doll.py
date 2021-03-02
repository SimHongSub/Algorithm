# 스택 : 크레인 인형뽑기 게임

def solution(board, moves):
    answer = 0
    basket = []

    for move in moves:
        move -= 1

        for i in range(len(board)):
            if board[i][move] != 0:
                if len(basket) == 0:
                    basket.append(board[i][move])
                    board[i][move] = 0
                else:
                    if basket[-1] == board[i][move]:
                        answer += 2
                        basket.pop()
                    else:
                        basket.append(board[i][move])

                    board[i][move] = 0

                break

    return answer


if __name__ == "__main__":
    print(solution([[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]], [1,5,3,5,1,2,1,4]))

