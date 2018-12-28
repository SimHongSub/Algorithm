#include <iostream>
#include <string>

using namespace std;

int main(){

	string input;
	string alpha[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	int result = 0, i;

	cin >> input;

	for (i = 0; i < 8; i++){

		while (input.find(alpha[i]) != string::npos){
			result++;
			if (i == 2){
				input.replace(input.find(alpha[i]), 3, "000");
			}
			else{
				input.replace(input.find(alpha[i]), 2, "00");
			}
		}
	}

	for (i = 0; i < input.size(); i++){
		if (input.at(i) != '0'){
			result++;
		}
	}

	cout << result << endl;

	return 0;
}