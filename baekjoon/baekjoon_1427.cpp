#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string N;
	int length[10];

	fill_n(length, 10, -1);

	cin >> N;

	for (int i = 0; i < N.length(); i++){
		length[i] = N.at(i) - 48;
	}

	sort(length, length + 10);

	for (int i = 9; i >= 0; i--){
		if (length[i] == -1){
			break;
		}
		else{
			cout << length[i];
		}
	}

	return 0;
}