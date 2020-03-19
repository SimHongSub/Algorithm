#include <iostream>

using namespace std;

int main(){

	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++){
		if (i == 1){
			for (int j = 1; j <= N - 1; j++){
				printf(" ");
			}

			printf("*");
		}
		else if (i == N){
			for (int j = 1; j <= 2 * N - 1; j++){
				printf("*");
			}
		}
		else{
			for (int j = 1; j <= N - i; j++){
				printf(" ");
			}
			
			printf("*");

			for (int j = 1; j <= 2 * i - 3; j++){
				printf(" ");
			}

			printf("*");
		}

		printf("\n");
	}

	return 0;
}