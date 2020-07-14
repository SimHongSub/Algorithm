#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N, input, result = 0;
	vector<int> v;

	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		scanf("%d", &input);

		v.push_back(input);
	}

	do{
		int temp = 0;

		for (int i = 1; i < N; i++){
			temp = temp + abs(v[i - 1] - v[i]);
		}

		if (temp > result){
			result = temp;
		}

	} while (next_permutation(v.begin(), v.end()));

	printf("%d", result);

	return 0;
}