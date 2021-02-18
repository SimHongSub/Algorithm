# 그리디 : 조이스틱

def solution(name):
    idx, answer = 0, 0

    intervals = [min(ord(alp) - ord('A'), ord('Z') + 1 - ord(alp)) for alp in name]

    while True:
        answer += intervals[idx]
        intervals[idx] = 0

        if sum(intervals) == 0:
            break

        left, right = 1, 1

        while intervals[idx - left] == 0:
            left += 1

        while intervals[idx + right] == 0:
            right += 1

        if left < right:
            answer += left
            idx -= left
        else:
            answer += right
            idx += right

    return answer


if __name__ == "__main__":

    print(solution("JAZ"))

    print(solution("JEROEN"))

    print(solution("JAN"))
