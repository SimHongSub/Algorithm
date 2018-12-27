#include <iostream>

using namespace std;

void drawStar(int n, int x, int y);

char star[3072][6144];

int main(){

	int inputN;

	scanf("%d", &inputN);

	for (int i = 0; i < inputN; i++){
		for (int j = 0; j < 2 * inputN; j++){
			if (j == 2 * inputN - 1){
				star[i][j] = '\0';
			}
			else{
				star[i][j] = ' ';
			}
		}
	}

	drawStar(inputN, inputN - 1, 0);

	for (int i = 0; i < inputN; i++){
		for (int j = 0; j < 2 * inputN - 1; j++){
			printf("%c", star[i][j]);
		}
		
		printf("\n");
	}

	return 0;
}

void drawStar(int n, int x, int y){

	if (n == 3){
		star[y][x] = '*';
		star[y + 1][x - 1] = '*';
		star[y + 1][x + 1] = '*';
		star[y + 2][x - 2] = '*';
		star[y + 2][x - 1] = '*';
		star[y + 2][x] = '*';
		star[y + 2][x + 1] = '*';
		star[y + 2][x + 2] = '*';

		return;
	}

	drawStar(n / 2, x, y);
	drawStar(n / 2, x - (n / 2), y + (n / 2));
	drawStar(n / 2, x + (n / 2), y + (n / 2));
}