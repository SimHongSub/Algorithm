# 괄호 변환

def check(p):
    stack = list()

    for bracket in p:
        if bracket == '(':
            stack.append(bracket)
        else:
            if len(stack) == 0:
                return False

            stack.pop()

    if len(stack) == 0:
        return True
    else:
        return False


def solution(p):

    if check(p):
        return p

    if p[0] == '(':
        count_check = 1
    else:
        count_check = -1

    answer, v = p[0], ""

    for i in range(1, len(p)):
        answer += p[i]

        if p[i] == '(':
            count_check += 1
        else:
            count_check -= 1

        if count_check == 0:
            if i < len(p)-1:
                v = p[i+1:]
            break

    if check(answer):
        answer += solution(v)
    else:
        temp = "("
        temp += solution(v) + ")"

        answer = answer[1:len(answer)-1]

        for i in range(0, len(answer)):
            if answer[i] == "(":
                answer = answer[0:i] + ")" + answer[i+1:]
            else:
                answer = answer[0:i] + "(" + answer[i+1:]

        temp += answer

        return temp

    return answer


if __name__ == '__main__':
    print(solution("(()())()"))
    print(solution(")("))
    print(solution("()))((()"))

