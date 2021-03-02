# 큐 : 스킬트리

def solution(skill, skill_trees):
    answer = len(skill_trees)

    for skill_tree in skill_trees:
        orders = [order for order in skill]
        tree = [i for i in skill_tree]

        for order in tree:
            if order in orders:
                if order == orders[0]:
                    orders.pop(0)
                else:
                    answer -= 1
                    break

    return answer
