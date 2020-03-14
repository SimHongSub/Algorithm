#include <iostream>

using namespace std;

int main(){

	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			int check_i = i;
			int check_j = j;
			int check = 0;

			while (check_i != 0){
				if (check_i % 3 == 1 && check_j % 3 == 1){
					printf(" ");
					check = 1;
					break;
				}
				check_i /= 3;
				check_j /= 3;
			}

			if (check == 0){
				printf("*");
			}else{
				check = 0;
			}
			
		}
		printf("\n");
	}

	return 0;
}