#include <iostream>
#include <string>

using namespace std;

int main(){

	string input;
	int index;

	cin >> input;
	
	for (char alphabet = 'a'; alphabet <= 'z'; alphabet++){
		index = input.find(alphabet);
		cout << index << " ";
	}

	cout << endl;

	return 0;
}