#include <iostream>

using namespace std;

int main(){

	int N, input;
	int count[10001] = {0,};

	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		scanf("%d",&input);
		count[input]++;
	}

	for (int i = 1; i < 10001; i++){
		count[i] += count[i - 1];
	}

	for (int i = 1; i < 10001; i++){
		if (count[i] != count[i - 1]){
			for (int j = 0; j < (count[i] - count[i - 1]); j++){
				printf("%d\n", i);
			}
		}
	}

	return 0;
}