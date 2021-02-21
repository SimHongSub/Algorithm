# 이분탐색 : 징검다리

def solution(distance, rocks, n):
    answer = []
    left, right = 0, distance

    rocks.sort()
    rocks.append(distance)

    while left <= right:
        mid = (left + right) // 2
        current_rock = 0
        remove_count = 0

        for rock in rocks:
            if rock - current_rock < mid:
                remove_count += 1
            else:
                current_rock = rock

            if remove_count > n:
                break

        if remove_count > n:
            right = mid - 1
        else:
            answer.append(mid)
            left = mid + 1

    return max(answer)
