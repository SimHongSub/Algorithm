# 2020 카카오 블라인 코딩테스트 - 가사 검색

class Node(object):
    def __init__(self, key):
        self.key = key
        self.count = 0
        self.children = {}


class Trie(object):
    def __init__(self):
        self.head = Node(self)

    def insert(self, string):
        curr_node = self.head

        for char in string:
            curr_node.count += 1
            if char not in curr_node.children:
                curr_node.children[char] = Node(char)

            curr_node = curr_node.children[char]

        curr_node.count += 1

    def starts_with(self, prefix):
        curr_node = self.head
        result = 0

        for char in prefix:
            if char == '?':
                break

            if char in curr_node.children:
                curr_node = curr_node.children[char]
            else:
                return 0

        return curr_node.count


def solution(words, queries):
    answer = []
    tries = {}
    reverse_tries = {}

    for word in words:
        if len(word) in tries:
            tries[len(word)].insert(word)
            reverse_tries[len(word)].insert(reversed(word))
        else:
            trie = Trie()
            reverse_trie = Trie()

            trie.insert(word)
            reverse_trie.insert(reversed(word))

            tries[len(word)] = trie
            reverse_tries[len(word)] = reverse_trie

    for query in queries:
        if len(query) in tries:
            if query[0] != '?':
                trie = tries[len(query)]
                answer.append(trie.starts_with(query))
            else:
                trie = reverse_tries[len(query)]
                answer.append(trie.starts_with(reversed(query)))
        else:
            answer.append(0)

    return answer

