# 완전탐색 : 카펫

def solution(brown, yellow):
    answer = []
    total_grid = brown + yellow

    for i in range(total_grid, 0, -1):
        y_grid = yellow
        if i < total_grid / i:
            break

        if total_grid % i == 0 and total_grid / i >= 3:
            horizontal, vertical = i, total_grid // i

            carpet = [[0 for col in range(horizontal)] for row in range(vertical)]

            for col in range(1, horizontal-1):
                for row in range(1, vertical-1):
                    if y_grid == 0:
                        break

                    y_grid -= 1
                    carpet[row][col] = 1

                if y_grid == 0:
                    break

            if y_grid == 0:
                answer = [horizontal, vertical]
                break

    return answer


if __name__ == "__main__":

    print(solution(8, 1))
