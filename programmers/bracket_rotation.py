# 괄호 회전하기

def solution(s):
    answer = 0
    size = len(s)
    arr_s = [ch for ch in s]

    if size < 2:
        return 0

    for i in range(size):
        if arr_s[0] == '(' or arr_s[0] == '{' or arr_s[0] == '[':
            stack = [arr_s[0]]

            for j in range(1, size):
                if len(stack) < 1:
                    stack.append(arr_s[j])
                else:
                    if stack[-1] == '(':
                        if arr_s[j] == ')':
                            stack.pop()
                        else:
                            stack.append(arr_s[j])
                    elif stack[-1] == '{':
                        if arr_s[j] == '}':
                            stack.pop()
                        else:
                            stack.append(arr_s[j])
                    elif stack[-1] == '[':
                        if arr_s[j] == ']':
                            stack.pop()
                        else:
                            stack.append(arr_s[j])
                    else:
                        stack.append(arr_s[j])

            if len(stack) == 0:
                answer += 1

        arr_s.append(arr_s[0])
        arr_s.pop(0)

    return answer
