# 해시 : 위장

def solution(clothes):
    answer = 1
    dict_clothes = {}

    for name, kind in clothes:
        if kind in dict_clothes:
            dict_clothes[kind].append(name)
        else:
            temp = [name]
            dict_clothes[kind] = temp

    for kind in dict_clothes.keys():
        answer *= (len(dict_clothes[kind]) + 1)

    return answer - 1

