# 올바른 괄호

def solution(s):
    answer = True

    if s[0] == ")" or len(s) < 2:
        return False

    stack = [s[0]]

    for i in range(1, len(s)):
        if s[i] == ")":
            if len(stack) > 0:
                stack.pop()
        else:
            stack.append(s[i])

    if len(stack) > 0:
        return False

    return True
