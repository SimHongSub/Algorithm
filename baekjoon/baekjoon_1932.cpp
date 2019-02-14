#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int memo[501][501];

int main(){

	int n, triangle[501][501], answer = 0;

	cin >> n;

	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++){
			cin >> triangle[i][j];
		}
	}

	memo[0][0] = triangle[0][0];

	for (int i = 1; i < n; i++){
		for (int j = 0; j <= i; j++){
			if (j == 0){
				memo[i][j] = memo[i - 1][j] + triangle[i][j];
			}
			else if(i == j){
				memo[i][j] = memo[i - 1][j - 1] + triangle[i][j];
			}
			else{
				memo[i][j] = max(memo[i - 1][j - 1], memo[i - 1][j]) + triangle[i][j];
			}
		}
	}

	for (int i = 0; i < n; i++){
		if (answer <= memo[n - 1][i]){
			answer = memo[n - 1][i];
		}
	}

	cout << answer << '\n';

	return 0;
}