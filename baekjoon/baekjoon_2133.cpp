#include <iostream>
using namespace std;

int main() {

	int N;
	int dp[31] = { 1, 0, 3 };
	cin >> N;

	if (N % 2 == 0)
		for (int i = 4; i <= N; i += 2){
			dp[i] = dp[i - 2] * 3;

			for (int j = 4; i - j >= 0; j += 2)
				dp[i] += dp[i - j] * 2;
		}

	cout << dp[N] << endl;

	return 0;
}
