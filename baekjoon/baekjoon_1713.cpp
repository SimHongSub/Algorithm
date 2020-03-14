#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){

	int N; //사진틀 개수
	int total_reco; // 총 추천 횟수
	int reco_num; // 추천받는 학생 번호
	int result[20]; // 최종 후보
	int reco_seq[20]; //추천 순서
	int count[101]; // 각 학생이 받은 추천 수
	int blank_check = 0;
	int exis_check = 0;

	memset(count, 0, sizeof(count));

	scanf("%d", &N);

	memset(result, 0, sizeof(result));
	memset(reco_seq, 0, sizeof(reco_seq));

	scanf("%d", &total_reco);

	for (int i = 0; i < total_reco; i++){
		scanf("%d", &reco_num);

		for (int j = 0; j < N; j++){
			if (result[j] == reco_num){
				count[reco_num]++;
				exis_check = 1;
				blank_check = 1;

				break;
			}
		}

		if (exis_check == 0){
			for (int j = 0; j < N; j++){
				if (result[j] == 0){
					result[j] = reco_num;

					count[reco_num]++;
					reco_seq[j] = *max_element(reco_seq, reco_seq + N) + 1;
					blank_check = 1;

					break;
				}
			}
		}else{
			exis_check = 0;
		}

		if (blank_check == 0){
			int min_count = 1000;
			int alter_num;

			for (int j = 0; j < N; j++){
				if (min_count > count[result[j]]){
					min_count = count[result[j]];
					alter_num = j;
				}else{
					if (min_count == count[result[j]]){
						if (reco_seq[alter_num] > reco_seq[j]){
							alter_num = j;
						}
					}
				}
			}

			count[result[alter_num]] = 0;
			result[alter_num] = reco_num;
			reco_seq[alter_num] = *max_element(reco_seq, reco_seq + N) + 1;
			count[result[alter_num]]++;
		}else{
			blank_check = 0;
		}
	}

	sort(result, result + N);

	for (int i = 0; i < N; i++){
		printf("%d ", result[i]);
	}

	return 0;
}