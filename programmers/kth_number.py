# 정렬 : K번째수

def solution(array, commands):
    answer = []

    for command in commands:
        start, end, index = command
        slice_array = array[start - 1:end]

        slice_array.sort()

        answer.append(slice_array[index - 1])

    return answer