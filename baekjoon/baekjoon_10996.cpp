#include <iostream>

using namespace std;

int main(){

	int N;

	scanf("%d", &N);

	if (N == 1){
		printf("*");

		return 0;
	}

	for (int i = 1; i <= 2 * N; i++){
		if (i % 2 == 1){
			for (int j = 1; j <= N; j++){
				if (j % 2 == 1){
					printf("*");
				}else{
					printf(" ");
				}
			}

			printf("\n");
		}else{
			for (int j = 1; j <= N; j++){
				if (j % 2 == 0){
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