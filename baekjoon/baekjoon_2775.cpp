#include <iostream>

using namespace std;

int main(){

	int room[15][14] = { 0 };
	int T, k ,n;

	for (int i = 0; i < 14; i++){
		room[0][i] += i + 1;
		room[i + 1][0] = 1;
	}

	for (int i = 1; i < 14; i++){
		for (int j = 1; j < 15; j++){
			room[j][i] = room[j][i - 1] + room[j - 1][i];
		}
	}

	cin >> T;

	for (int i = 0; i < T; i++){
		cin >> k >> n;
		cout << room[k][n - 1] << endl;
	}

	return 0;
}