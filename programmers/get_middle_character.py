# 가운데 글자 가져오기

def solution(s):
    answer = ''

    index = len(s) // 2

    if len(s) % 2 == 0:
        answer = s[index - 1] + s[index]
    else:
        answer = s[index]

    return answer
