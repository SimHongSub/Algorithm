#include <iostream>
#include <algorithm>

using namespace std;

int memo[2][100000];

int main(){

	int T, n, score;
	int sticker[2][100000];

	cin >> T;

	for (int i = 0; i < T; i++){
		cin >> n;

		for (int j = 0; j < 2; j++){

			for (int k = 0; k < n; k++){

				cin >> sticker[j][k];
			}
		}

		memo[0][0] = sticker[0][0];
		memo[1][0] = sticker[1][0];
		memo[0][1] = memo[1][0] + sticker[0][1];
		memo[1][1] = memo[0][0] + sticker[1][1];

		for (int j = 2; j < n; j++){
			memo[0][j] = max(memo[1][j - 1], memo[1][j - 2]) + sticker[0][j];
			memo[1][j] = max(memo[0][j - 1], memo[0][j - 2]) + sticker[1][j];
		}

		cout << max(memo[0][n-1], memo[1][n-1]) << '\n';
	}
}