# 정렬 : 가장 큰 수

import functools


def sort_by(a, b):
    if int(a + b) > int(b + a):
        return 1
    else:
        return -1


def solution(numbers):
    answer = ''
    string_numbers = [str(number) for number in numbers]

    string_numbers = sorted(string_numbers, key=functools.cmp_to_key(sort_by), reverse=True)

    if string_numbers[0] == '0':
        return '0'

    for number in string_numbers:
        answer += number

    return answer


if __name__ == "__main__":
    print(solution([6, 10, 2]))
