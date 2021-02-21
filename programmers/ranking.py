# 그래프 : 순위

def solution(n, results):
    answer = 0
    dict_win, dict_lose = {}, {}

    for i in range(1, n + 1):
        win, lose = set(), set()

        for result in results:
            if result[0] == i:
                win.add(result[1])
            elif result[1] == i:
                lose.add(result[0])

        dict_win[i] = win
        dict_lose[i] = lose

    for i in range(1, n + 1):
        for player in dict_win[i]:
            dict_lose[player].update(dict_lose[i])

        for player in dict_lose[i]:
            dict_win[player].update(dict_win[i])

    for i in range(1, n + 1):
        if len(dict_win[i]) + len(dict_lose[i]) == n - 1:
            answer += 1

    return answer
