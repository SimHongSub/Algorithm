#include <iostream>

using namespace std;

int grape[500][500];

int main(){

	int N, M, temp;
	int result = 0;

	scanf("%d", &N);
	scanf("%d", &M);

	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			scanf("%d", &grape[i][j]);
		}
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (j + 3 < M){
				temp = grape[i][j] + grape[i][j + 1] + grape[i][j + 2] + grape[i][j + 3];
				
				if (temp > result){
					result = temp;
				}
			}

			if(i + 3 < N){
				temp = grape[i][j] + grape[i + 1][j] + grape[i + 2][j] + grape[i + 3][j];

				if (temp > result){
					result = temp;
				}
			}

			if (i + 1 < N && j + 1 < M){
				temp = grape[i][j] + grape[i][j + 1] + grape[i + 1][j] + grape[i + 1][j + 1];

				if (temp > result){
					result = temp;
				}
			}

			if (i + 2 < N && j + 1 < M){
				temp = grape[i][j] + grape[i + 1][j] + grape[i + 2][j] + grape[i + 2][j + 1];

				if (temp > result){
					result = temp;
				}

				temp = grape[i][j] + grape[i][j + 1] + grape[i + 1][j + 1] + grape[i + 2][j + 1];

				if (temp > result){
					result = temp;
				}

				temp = grape[i + 2][j] + grape[i + 2][j + 1] + grape[i + 1][j + 1] + grape[i][j + 1];

				if (temp > result){
					result = temp;
				}

				temp = grape[i][j] + grape[i][j + 1] + grape[i + 1][j] + grape[i + 2][j];

				if (temp > result){
					result = temp;
				}

				temp = grape[i][j] + grape[i + 1][j] + grape[i + 1][j + 1] + grape[i + 2][j + 1];

				if (temp > result){
					result = temp;
				}

				temp = grape[i][j + 1] + grape[i + 1][j] + grape[i + 1][j + 1] + grape[i + 2][j];

				if (temp > result){
					result = temp;
				}

				temp = grape[i][j + 1] + grape[i + 1][j] + grape[i + 1][j + 1] + grape[i + 2][j + 1];

				if (temp > result){
					result = temp;
				}

				temp = grape[i][j] + grape[i + 1][j] + grape[i + 1][j + 1] + grape[i + 2][j];

				if (temp > result){
					result = temp;
				}
			}

			if (i + 1 < N && j + 2 < M){
				temp = grape[i + 1][j] + grape[i + 1][j + 1] + grape[i + 1][j + 2] + grape[i][j + 2];

				if (temp > result){
					result = temp;
				}

				temp = grape[i][j] + grape[i + 1][j] + grape[i][j + 1] + grape[i][j + 2];

				if (temp > result){
					result = temp;
				}

				temp = grape[i][j] + grape[i + 1][j] + grape[i + 1][j + 1] + grape[i + 1][j + 2];

				if (temp > result){
					result = temp;
				}

				temp = grape[i][j] + grape[i][j + 1] + grape[i][j + 2] + grape[i + 1][j + 2];

				if (temp > result){
					result = temp;
				}

				temp = grape[i + 1][j] + grape[i + 1][j + 1] + grape[i][j + 1] + grape[i][j + 2];

				if (temp > result){
					result = temp;
				}

				temp = grape[i][j] + grape[i][j + 1] + grape[i + 1][j + 1] + grape[i + 1][j + 2];

				if (temp > result){
					result = temp;
				}

				temp = grape[i + 1][j] + grape[i + 1][j + 1] + grape[i][j + 1] + grape[i + 1][j + 2];

				if (temp > result){
					result = temp;
				}

				temp = grape[i][j] + grape[i][j + 1] + grape[i + 1][j + 1] + grape[i][j + 2];

				if (temp > result){
					result = temp;
				}
			}
		}
	}

	printf("%d", result);

	return 0;
}