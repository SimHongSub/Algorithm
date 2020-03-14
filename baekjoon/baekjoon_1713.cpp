#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){

	int N; //����Ʋ ����
	int total_reco; // �� ��õ Ƚ��
	int reco_num; // ��õ�޴� �л� ��ȣ
	int result[20]; // ���� �ĺ�
	int reco_seq[20]; //��õ ����
	int count[101]; // �� �л��� ���� ��õ ��
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