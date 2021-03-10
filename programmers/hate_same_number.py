# 같은 숫자는 싫어

def solution(arr):
    answer = []

    for number in arr:
        if len(answer) == 0:
            answer.append(number)
        else:
            if answer[-1] != number:
                answer.append(number)

    return answer
