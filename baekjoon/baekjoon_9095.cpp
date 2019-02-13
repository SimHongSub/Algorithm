#include <iostream>

using namespace std;

int answer[11] = { 0, };

int getAnswer(int n);

int main(){
	int T, n;

	cin >> T;

	for (int i = 0; i < T; i++){
		cin >> n;

		cout << getAnswer(n) << endl;
	}
}

int getAnswer(int n){

	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3) return 4;
	if (answer[n] != 0) return answer[n];

	return answer[n] = getAnswer(n - 1) + getAnswer(n - 2) + getAnswer(n - 3);
}