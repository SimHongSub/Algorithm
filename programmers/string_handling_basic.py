# 문자열 다루기 기본

def solution(s):
    answer = False
    size = len(s)

    if (size == 6 or size == 4) and s.isdigit():
        answer = True

    return answer
