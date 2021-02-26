# 해시 : 베스트앨범

def solution(genres, plays):
    answer = []
    genre_play_count = {}
    dict_result = {}

    for i in range(len(genres)):
        genre = genres[i]
        if genre not in dict_result:
            genre_play_count[genre] = plays[i]
            dict_result[genre] = [(i, plays[i])]
        else:
            genre_play_count[genre] += plays[i]
            play_list = dict_result[genre]
            play_list.append((i, plays[i]))

    genre_play_count = sorted(genre_play_count.items(), key=lambda x: x[1], reverse=True)

    for genre, count in genre_play_count:
        play_list = dict_result[genre]
        play_list.sort(key=lambda x: x[1], reverse=True)

        if len(play_list) > 1:
            for i in range(2):
                answer.append(play_list[i][0])
        else:
            answer.append(play_list[0][0])

    return answer


if __name__ == "__main__":
    solution(["classic", "pop", "classic", "classic", "pop"], [500, 600, 150, 800, 2500])
