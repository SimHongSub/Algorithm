#include <iostream>

using namespace std;

int main() {
	int n, tc;
	long long dp[101];

	cin >> tc;

	while (tc--) {
		cin >> n;

		dp[1] = dp[2] = dp[3] = 1;
		dp[4] = dp[5] = 2;
		dp[6] = 3;

		for (int i = 7; i <= n; i++) {
			dp[i] = dp[i - 5] + dp[i - 1];
		}

		cout << dp[n] << '\n';
	}
	return 0;
}
