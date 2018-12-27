#include <iostream>
#include <string>

using namespace std;

int main(){

	string s;
	int i;
	int count = 0, resultCount = 0;
	char result;
	
	cin >> s;

	for (i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}

	for (char alpha = 'A'; alpha <= 'Z'; alpha++){
		for (i = 0; i < s.size(); i++){
			if (s.at(i) == alpha){
				count++;
			}
		}

		if (count > resultCount){
			resultCount = count;
			result = alpha;
		}
		else if (count == resultCount && count != 0){
			result = '?';
		}
		
		count = 0;
	}

	cout << result << endl;

	return 0;
}