# 스택/큐 : 프린터

def solution(priorities, location):
    answer = 0
    index_queue = [i for i in range(len(priorities))]

    while len(priorities) > 0:
        document = priorities.pop(0)
        document_index = index_queue.pop(0)
        check = 0

        for priority in priorities:
            if document < priority:
                priorities.append(document)
                index_queue.append(document_index)
                check = 1

                break

        if check == 0:
            if document_index == location:
                answer += 1
                break
            else:
                answer += 1

    return answer


if __name__ == "__main__":
    print(solution([2, 1, 3, 2], 2))
