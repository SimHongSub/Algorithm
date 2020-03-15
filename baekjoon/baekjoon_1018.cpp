#include <iostream>

using namespace std;

int main(){

	int N, M;
	char chess_w[8][8] = {
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'
	};
	char chess_b[8][8] = {
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'
	};
	char board[50][50];
	int result;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < N - 7; i++){
		for (int j = 0; j < M - 7; j++){
			int cnt_w = 0;
			int cnt_b = 0;

			for (int k = i; k < i + 8; k++){
				for (int z = j; z < j + 8; z++){
					if (board[k][z] != chess_b[k - i][z - j]){
						cnt_b++;
					}

					if (board[k][z] != chess_w[k - i][z - j]){
						cnt_w++;
					}
				}
			}

			if (i == 0 && j == 0){
				if (cnt_w > cnt_b){
					result = cnt_b;
				}else{
					result = cnt_w;
				}
			}else{
				if (cnt_w > cnt_b){
					if (result > cnt_b){
						result = cnt_b;
					}
				}else{
					if (result > cnt_w){
						result = cnt_w;
					}
				}
			}
		}
	}

	printf("%d", result);

	return 0;
}