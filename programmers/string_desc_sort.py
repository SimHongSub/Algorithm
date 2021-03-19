# 문자열 내림차순으로 정렬하기

def solution(s):
    answer = ''
    s = sorted(s)

    s = list(reversed(s))

    for char in s:
        answer += char

    return answer
