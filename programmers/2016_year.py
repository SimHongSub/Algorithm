# datetime 활용 : 2016년

from datetime import date


def solution(a, b):
    answer = ['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN']
    input_date = date(2016, a, b)

    return answer[input_date.weekday()]
