#include <iostream>

using namespace std;

int main(){

	int input;
	int range = 1;
	int temp = 1;

	cin >> input;

	while (1){
		if (range >= input){
			if (temp % 2 == 1){
				cout << (range - input + 1) << "/" << (temp - (range - input)) << endl;
			}
			else{
				cout << (temp - (range - input)) << "/" << (range - input + 1) << endl;
			}
			break;
		}
		range += (++temp);
	}

	return 0;
}