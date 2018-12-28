#include <iostream>

using namespace std;

int main(){
	
	int input;
	int range = 1;
	int result = 1;

	cin >> input;

	while (1){
		if (range >= input){
			break;
		}
		range = range + 6 * (result++);
	}

	cout << result << endl;
	
	return 0;
}