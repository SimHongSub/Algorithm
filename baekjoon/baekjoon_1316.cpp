#include <iostream>
#include <string>

using namespace std;

int main(){

	int numOfWord;
	string word;
	int i, j, k;
	int result, check;

	cin >> numOfWord;

	result = numOfWord;

	for (i = 0; i < numOfWord; i++){
		cin >> word;

		for (j = 0; j < word.size(); j++){
			check = 0;
			for (k = j; k < word.size(); k++){
				if (word.at(j) != word.at(k)){
					check = 1;
				}
				else if (word.at(j) == word.at(k) && check == 1){
					result--;
					check = 0;
					break;
				}
			}
			if (check == 0){
				break;
			}
		}
	}

	cout << result << endl;

	return 0;
}