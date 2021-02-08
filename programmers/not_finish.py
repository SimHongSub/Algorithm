# 해시 : 완주하지 못한 선

def solution(participants, completions):
    dic_completions = {}
    answer = ''

    for completion in completions:
        if completion in dic_completions:
            dic_completions[completion] += 1
        else:
            dic_completions[completion] = 1

    for participant in participants:
        if participant in dic_completions:
            dic_completions[participant] -= 1

            if dic_completions[participant] == 0:
                del dic_completions[participant]
        else:
            answer = participant
            break

    return answer

