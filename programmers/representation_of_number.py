# 숫자의 표현

def solution(n):
    answer = 0

    for i in range(1, n + 1):
        sum_of_num = 0
        for j in range(i, n + 1):
            sum_of_num += j
            if sum_of_num == n:
                answer += 1
                break
            elif sum > n:
                break

    return answer
