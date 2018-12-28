#include <iostream>
#include <string>

using namespace std;

int main(){

	string input;
	int result = 0;

	cin >> input;

	for (int i = 0; i < input.size(); i++){
		if (input.at(i) == 'A' || input.at(i) == 'B' || input.at(i) == 'C'){

			result = result + 3;

		}
		else if (input.at(i) == 'D' || input.at(i) == 'E' || input.at(i) == 'F'){
			result = result + 4;
		}
		else if (input.at(i) == 'G' || input.at(i) == 'H' || input.at(i) == 'I'){
			result = result + 5;
		}
		else if (input.at(i) == 'J' || input.at(i) == 'K' || input.at(i) == 'L'){
			result = result + 6;
		}
		else if (input.at(i) == 'M' || input.at(i) == 'N' || input.at(i) == 'O'){
			result = result + 7;
		}
		else if (input.at(i) == 'P' || input.at(i) == 'Q' || input.at(i) == 'R' || input.at(i) == 'S'){
			result = result + 8;
		}
		else if (input.at(i) == 'T' || input.at(i) == 'U' || input.at(i) == 'V'){
			result = result + 9;
		}
		else{
			result = result + 10;
		}
	}

	cout << result << endl;

	return 0;
}