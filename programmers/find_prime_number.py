# 완전탐색 : 소수 찾기

import itertools


def solution(numbers):
    answer = 0
    set_numbers = set()
    list_number = [number for number in numbers]

    for i in range(1, len(numbers) + 1):
        permutation = list(itertools.permutations(list_number, i))

        for elements in permutation:
            str_num = ''

            for element in list(elements):
                str_num += element

            int_num = int(str_num)
            check = 0

            for i in range(2, int_num):
                if int_num % i == 0:
                    check = 1
                    break

            if check == 0 and int_num != 0 and int_num != 1:
                set_numbers.add(int_num)

    answer = len(set_numbers)

    return answer
