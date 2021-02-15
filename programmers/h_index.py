# 정렬 : H-Index

def solution(citations):
    answer = 0
    zero_check = 0

    citations.sort()

    if citations[len(citations) - 1] == 0:
        return 0

    while True:
        count = 0
        for citation in citations:

            if citation <= answer:
                count += 1

            if count > answer:
                break

        if len(citations) - count <= answer:
            break

        answer += 1

    return answer


if __name__ == "__main__":
    citations = [3, 0, 6, 1, 5]

    print(solution(citations))

