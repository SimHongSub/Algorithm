#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAX_NUM 10000

int main(){

	int N;
	int size;

	cin >> N;

	int *input = new int[N + 1];
	int *sortArr = new int[N + 1];

	for (int i = 1; i <= N; i++){
		cin >> input[i];
	}


	size = *max_element(input, input + N + 1);
	int *count = new int[size + 1];
	int *countSum = new int[size + 1];

	memset(count, 0, (size+1)*sizeof(int));

	for (int i = 1; i <= N; i++){
		count[input[i]]++;
	}

	countSum[0] = count[0];

	for (int i = 1; i <= size; i++){
		countSum[i] = countSum[i - 1] + count[i];
	}

	for (int i = N; i >= 1; i--){
		sortArr[countSum[input[i]]] = input[i];
		countSum[input[i]]--;
	}

	for (int i = 1; i <= N; i++){
		cout << sortArr[i] << endl;
	}


	return 0;
}