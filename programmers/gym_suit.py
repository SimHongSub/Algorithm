# 그리디 알고리즘 : 체육복

def solution(n, lost, reserve):
    answer = 0

    set_lost = set(lost) - set(reserve)
    set_reserve = set(reserve) - set(lost)

    for person in set_reserve:
        if person - 1 in set_lost:
            set_lost.remove(person - 1)
        elif person + 1 in set_lost:
            set_lost.remove(person + 1)

    answer = n - len(set_lost)

    return answer

