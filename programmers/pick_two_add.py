# 완전탐색 : 두 개 뽑아서 더하기

def solution(numbers):
    answer = set()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            answer.add(numbers[i] + numbers[j])

    return sorted(list(answer))
