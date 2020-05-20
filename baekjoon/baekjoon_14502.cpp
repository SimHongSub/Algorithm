#include <iostream>

using namespace std;

void fn_make_wall(int cnt);
void fn_spread_virus(int y, int x);

int N, M, result = 0;
int dx[4] = {-1, 0, 1, 0 };
int dy[4] = {0, -1, 0, 1 };
int map[8][8];
int temp[8][8];
int wall = 1;

int main(){

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			scanf("%d", &map[i][j]);
		}
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (map[i][j] == 0){
				map[i][j] = 1;
				fn_make_wall(wall);
				map[i][j] = 0;
			}
		}
	}

	printf("%d\n", result);

	return 0;
}

void fn_make_wall(int cnt){

	if (cnt == 3){
		int count = 0;

		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				temp[i][j] = map[i][j];
			}
		}

		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				if (temp[i][j] == 2){
					fn_spread_virus(i, j);
				}
			}
		}

		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				if (temp[i][j] == 0){
					count++;
				}
			}
		}

		if (result < count){
			result = count;
		}
		
		return ;
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (map[i][j] == 0){
				map[i][j] = 1;
				fn_make_wall(cnt + 1);
				map[i][j] = 0;
			}
		}
	}
}

void fn_spread_virus(int y, int x){
	for (int i = 0; i < 4; i++){
		int nx = dx[i] + x;
		int ny = dy[i] + y;

		if (0 <= ny && ny < N && 0 <= nx && nx < M){
			if (temp[ny][nx] == 0){
				temp[ny][nx] = 2;
				fn_spread_virus(ny, nx);
			}
		}
	}
}