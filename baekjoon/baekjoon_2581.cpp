#include <iostream>

using namespace std;

int main(){

	int M, N, check;
	int sum = 0, smallest = 0;

	cin >> M >> N;

	for (int i = M; i <= N; i++){

		check = 0;

		if (i == 1){
			check = 1;
		}
		else{
			for (int j = 1; j < i; j++){
				if (i%j == 0 && j != 1){
					check = 1;
					break;
				}
			}
		}

		if (check == 0){
			sum += i;

			if (smallest == 0){
				smallest = i;
			}
		}
	}

	if (sum == 0){
		cout << -1 << endl;
	}
	else{
		cout << sum << endl << smallest << endl;
	}

	return 0;
}