# 스택/큐 : 기능개발

from collections import deque


def solution(progresses, speeds):
    answer = []
    progress_q = deque(progresses)
    speed_q = deque(speeds)

    while progress_q:
        temp = 0

        for index in range(len(progress_q)):
            progress_q[index] += speed_q[index]

            if progress_q[temp] >= 100:
                temp += 1

        for i in range(temp):
            progress_q.popleft()
            speed_q.popleft()

        if temp != 0:
            answer.append(temp)

    return answer


if __name__ == "__main__":
    progresses = [95, 90, 99, 99, 80, 99]
    speeds = [1, 1, 1, 1, 1, 1]

    print(solution(progresses, speeds))

