# 완전탐색 : 모의고사

def solution(answers):
    answer = []
    one = [1, 2, 3, 4, 5]
    two = [2, 1, 2, 3, 2, 4, 2, 5]
    three = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    one_count = 0
    two_count = 0
    three_count = 0

    for i in range(len(answers)):
        if answers[i] == one[i % 5]:
            one_count += 1

        if answers[i] == two[i % 8]:
            two_count += 1

        if answers[i] == three[i % 10]:
            three_count += 1

    max_value = max(one_count, two_count, three_count)

    if one_count == max_value:
        answer.append(1)

    if two_count == max_value:
        answer.append(2)

    if three_count == max_value:
        answer.append(3)

    return answer

