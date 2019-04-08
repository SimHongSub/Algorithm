#include <iostream>

using namespace std;

int main(){

	int M, N;

	scanf("%d %d", &M, &N);

	bool *check = new bool[N + 1];

	fill_n(check, N+1, true);

	check[1] = false;

	for (int i = 2; i <= N; i++){
		if (check[i]){
			for (int j = i*2; j <= N; j+=i){
				check[j] = false;
			}
		}
	}

	for (int i = M; i <= N; i++){
		if (check[i]){
			printf("%d\n", i);
		}
	}

	return 0;
}