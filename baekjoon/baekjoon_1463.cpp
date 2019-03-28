#include <iostream>
#include <algorithm>

using namespace std;

int memo[1000001];

int main(){

	int N;

	cin >> N;

	memo[0] = memo[1] = 0;

	for (int i = 2; i <= N; i++){
		memo[i] = memo[i - 1] + 1;
		if (i % 2 == 0){
			memo[i] = min(memo[i], memo[i / 2] + 1);
		}
		if (i % 3 == 0){
			memo[i] = min(memo[i], memo[i / 3] + 1);
		}
	}

	cout << memo[N] << endl;

	return 0;
}