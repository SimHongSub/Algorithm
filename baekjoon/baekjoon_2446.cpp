#include <iostream>

using namespace std;

int main(){

	int N;
	int num;
	int check = 0, blank = 0;

	scanf("%d", &N);

	num = 2 * N - 1;

	for (int i = 0; i < 2*N-1; i++){
		for (int k = 0; k < blank; k++){
			printf(" ");
		}

		for (int j = 0; j < num; j++){
			printf("*");
		}

		if (num > 1 && check == 0){
			blank++;
			num -= 2;
		}
		else{
			check = 1;
			blank--;
			num += 2;
		}

		printf("\n");
	}

	return 0;
}