#include <iostream>
#include <algorithm>

using namespace std;

int answer[301];

int getAnswer(int n, int* score);

int main(){
	int stairNum, score[301];

	cin >> stairNum;

	for (int i = 1; i <= stairNum; i++){
		cin >> score[i];
	}

	answer[1] = score[1];
	answer[2] = max(score[1] + score[2], score[2]);
	answer[3] = max(score[1] + score[3], score[2] + score[3]);

	cout << getAnswer(stairNum, score) << endl;
}

int getAnswer(int n, int* score){
	if (n == 1) return answer[1];
	if (n == 2) return answer[2];
	if (n == 3) return answer[3];
	if (answer[n] != 0) return answer[n];

	return answer[n] = max(getAnswer(n-2, score) + score[n], getAnswer(n-3, score) + score[n-1] + score[n]);
}