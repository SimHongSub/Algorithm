# 최대공약수 : 멀쩡한 사각형

from math import gcd


def solution(w, h):
    answer = gcd(w, h)
    total_square = w * h

    reduction_w, reduction_h = w / answer, h / answer

    answer *= (reduction_w + reduction_h - 1)

    return total_square - answer
