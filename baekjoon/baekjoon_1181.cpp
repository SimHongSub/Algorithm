#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct Word{
	int len;
	char alphabet[51];
};

bool compare(Word &w1, Word &w2);

int main(){

	int N;

	cin >> N;

	Word *word = new Word[N];

	for (int i = 0; i < N; i++){
		cin >> word[i].alphabet;

		word[i].len = strlen(word[i].alphabet);
	}
	
	sort(word, word + N, compare);

	cout << word[0].alphabet << endl;

	for (int i = 1; i < N; i++){
		if (strcmp(word[i].alphabet, word[i - 1].alphabet)){
			cout << word[i].alphabet << endl;
		}
	}

	return 0;
}

bool compare(Word &w1, Word &w2){

	if (w1.len == w2.len){
		for (int i = 0; i < w1.len; i++){
			if (w1.alphabet[i] == w2.alphabet[i]){
				continue;
			}
			else if (w1.alphabet[i] < w2.alphabet[i]){
				return true;
			}
			else{
				return false;
			}
		}
	}

	return w1.len < w2.len;
}