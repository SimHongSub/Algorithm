# 힙 : 더 맵게

import heapq


def solution(scoville, K):
    answer = 0
    heapq.heapify(scoville)

    if scoville[-1] == 0:
        return -1

    while True:
        min_scoville = heapq.heappop(scoville)

        if min_scoville >= K:
            break

        if len(scoville) == 0:
            return -1

        new_scoville = min_scoville + (heapq.heappop(scoville) * 2)

        heapq.heappush(scoville, new_scoville)

        answer += 1

    return answer


if __name__ == "__main__":
    print(solution([1, 2, 3, 9, 10, 12], 7))
