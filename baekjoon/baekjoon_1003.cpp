#include <iostream>

using namespace std;

int memo[41];

int fibonacci(int n);

int main(){

	int T, N;

	fill_n(memo, 41, -1);
	memo[0] = 0;
	memo[1] = 1;

	cin >> T;

	for (int i = 0; i < T; i++){
		cin >> N;

		if (N == 0){
			cout << 1 << " " << 0 << endl;
		}
		else{
			fibonacci(N);

			cout << memo[N - 1] << " " << memo[N] << endl;
		}
	}

	return 0;
}

int fibonacci(int n){

	if (memo[n] != -1){
		return memo[n];
	}
	else{
		return memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
}