#include <iostream>
#include <string>

using namespace std;

int main(){

	int numOfTestCase, repeat;
	string s;

	cin >> numOfTestCase;

	for (int i = 0; i < numOfTestCase; i++){
		cin >> repeat >> s;
		for (int j = 0; j < s.size(); j++){
			for (int k = 0; k < repeat; k++){
				cout << s.at(j);
			}
		}
		cout << endl;
	}

	return 0;
}