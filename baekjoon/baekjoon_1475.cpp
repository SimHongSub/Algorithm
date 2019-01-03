#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string input;
	int arr[10] = { 0 };
	int num = 0;

	cin >> input;

	for (int i = 0; i < input.size(); i++){
		arr[input[i] - '0']++;
	}

	for (int i = 0; i < 10; i++){
		if (i != 9 && i != 6){
			num = max(num, arr[i]);
		}
	}

	cout << max(num, (arr[6] + arr[9] + 1) / 2) << endl;

	return 0;
}