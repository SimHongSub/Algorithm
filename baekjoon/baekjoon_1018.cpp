#include <iostream>

using namespace std;

int main(){

	int N, M;
	char board[50][50];

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			scanf("%c", &board[i][j]);
		}
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			printf("%c", board[i][j]);
		}
	}

	return 0;
}