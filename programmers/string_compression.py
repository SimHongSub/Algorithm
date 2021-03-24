# 문자열 압축

def solution(s):
    answer = 10001
    size = len(s)
    dic = {}

    if size == 1:
        return 1

    for i in range(1, size // 2 + 1):
        compression = ""
        pre_string = ""
        index = i
        while True:

            string = s[index - i:index]

            if pre_string == "":
                pre_string = string

                dic[string] = 1

                index += i

                continue

            if pre_string == string:
                dic[string] += 1
            else:
                count = dic[pre_string]

                if count != 1:
                    compression += str(count) + pre_string
                else:
                    compression += pre_string

                del dic[pre_string]

                dic[string] = 1

                pre_string = string

            if index >= size:

                count = dic[pre_string]

                if count != 1:
                    compression += str(count) + pre_string
                else:
                    compression += pre_string

                break

            index += i

        if answer > len(compression):
            answer = len(compression)

    return answer


if __name__ == '__main__':
    print(solution("aabbaccc"))
    print(solution("ababcdcdababcdcd"))
    print(solution("abcabcdede"))
    print(solution("abcabcabcabcdededededede"))
    print(solution("xababcdcdababcdcd"))