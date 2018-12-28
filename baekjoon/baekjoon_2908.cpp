#include <iostream>
#include <string>

using namespace std;

int main(){

	int inputA, inputB;
	int result[2] = {0};

	cin >> inputA >> inputB;

	while (inputA){
		result[0] = (result[0] * 10) + (inputA % 10);
		inputA = inputA / 10;
	}

	while (inputB){
		result[1] = (result[1] * 10) + (inputB % 10);
		inputB = inputB / 10;
	}

	if (result[0] > result[1]){
		cout << result[0] << endl;
	}
	else{
		cout << result[1] << endl;
	}

	return 0;
}