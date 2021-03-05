from datetime import datetime, timedelta


def set_times(process, time, times):
    if time in times:
        times[time].append(process)
    else:
        times[time] = [process]


def solution(lines):
    answer = 0
    processes = [0 for i in range(len(lines))]
    times = {}

    for i in range(len(lines)):
        line = lines[i]
        date, complete_time, processing_time = line.split(" ")
        date = date + " " + complete_time

        if '.' in processing_time:
            delay = processing_time.split('.')
            delay[1] = delay[1][0:-1]
        else:
            delay = list(processing_time[0:-1])
            delay += ["0"]

        end_time = datetime.fromisoformat(date)
        start_time = end_time - timedelta(seconds=int(delay[0]) + 0.9991, milliseconds=int(delay[1]) - 1)

        set_times(i, start_time, times)
        set_times(i, end_time, times)

    for time in sorted(times.keys()):
        process = times[time]

        for index in process:
            if processes[index] == 0:
                processes[index] = 1
            else:
                processes[index] = 0

            if sum(processes) > answer:
                answer = sum(processes)

    return answer


if __name__ == "__main__":
    print(solution(["2016-09-15 01:00:04.002 2.0s", "2016-09-15 01:00:07.000 2s"]))

