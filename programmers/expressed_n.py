# 동적계획법 : N으로 표현

def solution(N, number):
    answer = 0
    operations = ["+", "-", "*", "/"]
    calculate_result = [{N}]

    if number == N:
        return 1

    for i in range(2, 9):
        set_result = set([])
        set_result.add(int(str(N) * i))

        if list(set_result)[0] == number:
            answer = i
            break

        for j in range(len(calculate_result)):
            for calculate_number1 in calculate_result[j]:
                for calculate_number2 in calculate_result[i - j - 2]:
                    for operation in operations:
                        result = 0
                        if operation == "+":
                            result = calculate_number1 + calculate_number2
                        elif operation == "-":
                            result = calculate_number1 - calculate_number2
                        elif operation == "*":
                            result = calculate_number1 * calculate_number2
                        else:
                            result = calculate_number1 // calculate_number2

                        if result == number:
                            return i

                        if result > 0:
                            set_result.add(result)

        calculate_result.append(set_result)

    if answer == 0:
        return -1

    return answer


if __name__ == "__main__":
    print(solution(5, 12))
