# 깊이/너비 우선 탐색(DFS/BFS) : 단어 변환

from collections import deque


def solution(begin, target, words):
    answer = 0
    visited = {begin: 0}
    queue = deque([(begin, 0)])

    if target not in words:
        return 0

    for word in words:
        visited[word] = 0

    while queue:
        next_word = []
        current_word, conversion_count = queue.popleft()

        if current_word == target:
            answer = conversion_count
            break

        list_current_word = [alp for alp in current_word]

        if visited[current_word] == 0:
            visited[current_word] = 1

            for word in words:
                list_word = [alp for alp in word]
                different_count = 0

                for i in range(len(list_word)):
                    if list_word[i] != list_current_word[i]:
                        different_count += 1

                if different_count == 1:
                    next_word.append(word)

            for word in next_word:
                queue.append((word, conversion_count+1))

    return answer


if __name__ == "__main__":
    print(solution("hit", "cog", ["hot", "dot", "dog", "lot", "log", "cog"]))
