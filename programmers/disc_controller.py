# 힙 : 디스크 컨트롤러

from queue import PriorityQueue


def solution(jobs):
    answer, index, time = 0, 0, 0
    q = PriorityQueue()

    jobs.sort()

    while index < len(jobs) or not q.empty():
        if index < len(jobs) and jobs[index][0] <= time:
            q.put(list(reversed(jobs[index])))
            index += 1
        else:
            if q.empty():
                time = jobs[index][0]
            else:
                process = q.get()
                time += process[0]
                answer += time - process[1]

    return answer // len(jobs)


if __name__ == "__main__":
    jobs = [[0, 3], [1, 9], [2, 6]]

    print(solution(jobs))

