#include <iostream>
#include <algorithm>

using namespace std;

int memo[1001][3];
int cost[1001][3];

int main(){
	int N;

	cin >> N;

	for (int i = 0; i < N; i++){
		for (int j = 0; j < 3; j++){
			cin >> cost[i][j];
		}
	}

	memo[0][0] = cost[0][0];
	memo[0][1] = cost[0][1];
	memo[0][2] = cost[0][2];

	for (int i = 1; i < N; i++){
		memo[i][0] = min(memo[i - 1][1], memo[i - 1][2]) + cost[i][0];
		memo[i][1] = min(memo[i - 1][0], memo[i - 1][2]) + cost[i][1];
		memo[i][2] = min(memo[i - 1][0], memo[i - 1][1]) + cost[i][2];
	}

	cout << min(min(memo[N - 1][0], memo[N - 1][1]), memo[N - 1][2]) << endl;

	return 0;
}