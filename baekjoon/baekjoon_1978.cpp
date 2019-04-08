#include <iostream>

using namespace std;

int main(){

	int N, input, check, count = 0;

	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> input;

		check = 0;

		if (input == 1){
			check = 1;
		}
		else{
			for (int j = 1; j < input; j++){
				if (input%j == 0 && j != 1){
					check = 1;
					break;
				}
			}
		}

		if (check == 0){
			count++;
		}
	}

	cout << count << endl;

	return 0;
}