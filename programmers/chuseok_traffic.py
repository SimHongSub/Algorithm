def solution(lines):
    answer = 0
    processes = [0 for i in range(len(lines))]
    times = {}

    for i in range(len(lines)):
        line = lines[i]
        date, complete_time, processing_time = line.split(" ")

        processing_time = processing_time.replace("s", "")
        h, m, s = complete_time.split(":")

        end_time = int(h) * 60 * 60 + int(m) * 60 + float(s)
        start_time = end_time - float(processing_time) + 0.001 - 0.9991

        if start_time in times.keys():
            start_time -= 0.00001

        if end_time in times.keys():
            end_time -= 0.00001

        times[start_time] = i
        times[end_time] = i

    for time in sorted(times.keys()):
        process = times[time]

        if processes[process] == 0:
            processes[process] = 1
        else:
            processes[process] = 0

        if sum(processes) > answer:
            answer = sum(processes)

    return answer


if __name__ == "__main__":
    solution(["2016-09-15 01:00:04.002 2.0s", "2016-09-15 01:00:07.000 2s"])

