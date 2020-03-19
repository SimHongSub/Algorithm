#include <iostream>

using namespace std;

int main(){

	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++){
		if (i % 2 == 1){
			for (int j = 1; j <= 2 * N - 1; j++){
				if (j % 2 == 1){
					printf("*");
				}else{
					printf(" ");
				}
			}

			printf("\n");
		}
		else{
			printf(" ");

			for (int j = 1; j <= 2 * N - 1; j++){
				if (j % 2 == 1){
					printf("*");
				}
				else{
					printf(" ");
				}
			}

			printf("\n");
		}
	}

	return 0;
}