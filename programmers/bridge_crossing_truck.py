# 스택/큐 : 다리를 지나는 트럭

from collections import deque


def solution(bridge_length, weight, truck_weights):
    answer = 0
    remain_weight = weight - truck_weights[0]
    remain_length = [bridge_length - 1]
    crossing = deque([truck_weights.pop(0)])

    while crossing:
        answer += 1

        if remain_length[0] < 0:
            remain_length.pop(0)
            remain_weight += crossing.popleft()

        if len(truck_weights) > 0 and remain_weight >= truck_weights[0]:
            remain_weight -= truck_weights[0]
            remain_length.append(bridge_length - 1)
            crossing.append(truck_weights.pop(0))

        for length in remain_length:
            length -= 1

        for i in range(len(remain_length)):
            remain_length[i] -= 1

    return answer


if __name__ == "__main__":
    print(solution(2, 10, [7, 4, 5, 6]))
    print(solution(100, 100, [10]))
