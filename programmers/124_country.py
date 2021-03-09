# 124 나라의 숫자

def solution(n):
    answer = ''

    if n == 1 or n == 2:
        return str(n)

    while True:
        quotient = n // 3
        remainder = n % 3

        if quotient <= 3:
            if remainder == 0:
                quotient -= 1
                remainder = 4

            if quotient == 3:
                quotient = 4

            answer += str(remainder)

            if quotient != 0:
                answer += str(quotient)

            break
        else:
            if quotient == 4 and remainder == 0:
                answer += str(44)

                break
            else:
                if remainder == 0:
                    quotient -= 1
                    remainder = 4

                answer += str(remainder)
                n = quotient

    return answer[::-1]
