# 튜플

def solution(s):
    answer = []

    s = s[2:len(s) - 2]

    arr = s.split("},{")

    arr.sort(key=lambda x: len(x))

    for i in range(len(arr)):
        nums = arr[i].split(',')

        for num in nums:
            if int(num) not in answer:
                answer.append(int(num))
                break

    return answer