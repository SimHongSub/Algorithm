#include <iostream>

using namespace std;

int fibonacci(int* temp, int n);

int main(){

	int n;
	int result[46];

	result[0] = 0;
	result[1] = 1;

	for (int i = 2; i < 46; i++){
		result[i] = -1;
	}

	scanf("%d", &n);

	printf("%d", fibonacci(result, n));

	return 0;
}

int fibonacci(int* temp, int n){
	if (n == 0){
		return temp[0];
	}

	if (n == 1){
		return temp[1];
	}

	if (temp[n] != -1){
		return temp[n];
	}

	return temp[n] = fibonacci(temp, n-2) + fibonacci(temp, n - 1);
}