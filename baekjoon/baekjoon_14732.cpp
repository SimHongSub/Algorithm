#include <iostream>
#include <cstring>

using namespace std;

int main(){

	int N;
	int x1, x2, y1, y2, result = 0;
	int area[501][501];

	memset(area, 0, sizeof(area));

	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		for (int i = x1; i < x2; i++){
			for (int j = y1; j < y2; j++){
				area[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < 501; i++){
		for (int j = 0; j < 501; j++){
			if (area[i][j] == 1){
				result++;
			}
		}
	}

	printf("%d", result);

	return 0;
}