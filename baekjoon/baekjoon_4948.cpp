#include <iostream>

using namespace std;

int main(){

	int N, count;

	while (1){

		scanf("%d", &N);

		count = 0;

		if (N == 0){
			break;
		}
		else{
			bool *check = new bool[2 * N + 1];

			fill_n(check, 2 * N + 1, true);

			check[1] = false;

			for (int i = 2; i <= 2 * N; i++){
				if (check[i]){
					for (int j = i * 2; j <= 2 * N; j += i){
						check[j] = false;
					}
				}
			}

			for (int i = N + 1; i <= 2 * N; i++){
				if (check[i]){
					count++;
				}
			}

			printf("%d\n", count);
		}
	}

	return 0;
}