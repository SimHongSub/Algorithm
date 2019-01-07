#include <iostream>

using namespace std;

int lcm(int m, int n);

int main(){
	int T;
	int M, N, x, y, lcmNum;

	cin >> T;

	for (int i = 0; i < T; i++){
		cin >> M >> N >> x >> y;

		lcmNum = lcm(M, N);

		while (x != y && x <= lcmNum){
			if (x < y){
				x += M;
			}
			else{
				y += N;
			}

		}

		if (x != y){
			cout << -1 << endl;
		}
		else{
			cout << x << endl;
		}
	}

	return 0;
}

int lcm(int m, int n){
	
	int tmp, a, b;

	a = m, b = n;

	while (b){
		tmp = a;
		a = b;
		b = tmp%b;
	}

	return (m*n) / a;
}