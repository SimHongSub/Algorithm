# 쿼드압축 후 개수 세기

from queue import Queue


def check(arr):
    size = len(arr)
    value = arr[0][0]

    for i in range(0, size):
        for j in range(0, size):
            if arr[i][j] != value:
                return False

    return True


def solution(arr):
    answer = [0, 0]
    que = Queue()

    que.put(arr)

    while True:
        if que.empty():
            break;

        quad = que.get()

        if check(quad):
            answer[quad[0][0]] += 1
        else:
            size = len(quad)
            mid = size // 2

            for i in range(0, 2):
                for j in range(0, 2):
                    temp = [row[j * mid:(j + 1) * mid] for row in quad[i * mid:(i + 1) * mid]]

                    que.put(temp)

    return answer
