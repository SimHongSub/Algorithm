# 해시 : 전화번호 목록

def solution(phone_book):
    answer = True
    dic = {}

    for phone_number in phone_book:
        dic[phone_number] = 0

    for phone_number in phone_book:
        prefix = ""
        for number in phone_number:
            prefix += number
            if prefix in dic and prefix != phone_number:
                answer = False

                return answer

    return answer
