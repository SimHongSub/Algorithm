# 문자열 내 마음대로 정렬하기

import operator


def solution(strings, n):
    answer = []
    index_char = {}
    size = len(strings)
    dic = {}

    for i in range(size):
        string = strings[i]

        index_char[i] = string[n]

    index_char = sorted(index_char.items(), key=operator.itemgetter(1))

    for idx in index_char:
        if idx[1] not in dic:
            dic[idx[1]] = [strings[idx[0]]]
        else:
            dic[idx[1]].append(strings[idx[0]])

    for key in dic.keys():
        lst = dic[key]

        if len(lst) > 1:
            lst.sort()

        answer += lst

    return answer


if __name__ == '__main__':
    print(solution(["sun", "bed", "car"], 1))
