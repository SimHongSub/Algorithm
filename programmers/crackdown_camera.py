# 그리디 : 단속카메라

def solution(routes):
    answer = 0
    routes.sort(key=lambda x: x[1])
    position = -30001

    for route in routes:
        if position < route[0]:
            answer += 1
            position = route[1]

    return answer


if __name__ == "__main__":
    solution([[-20,15], [-14,-5], [-18,-13], [-5,-3]])
