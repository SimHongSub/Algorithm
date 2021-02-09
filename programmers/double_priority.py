# 힙 : 이증우선순위큐

def solution(operations):
    answer = []
    que = []

    for operation in operations:
        operation = operation.split()

        if operation[0] == 'I':
            que.append(int(operation[1]))
            que.sort()
        else:
            if que:
                if operation[1] == '1':
                    que.pop()
                else:
                    que.pop(0)

    if not que:
        answer = [0, 0]
    else:
        answer = [que.pop(), que.pop(0)]

    return answer

