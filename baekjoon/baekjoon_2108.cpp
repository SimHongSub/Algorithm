#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

struct Input{
	int mode = 0;
	int num;
};

bool numCompare(Input &input1, Input &input2);
bool modeCompare(Input &input1, Input &input2);

int main(){

	int N, range, idx;
	float average = 0;
	
	cin >> N;

	Input *input = new Input[N];

	for (int i = 0; i < N; i++){
		cin >> input[i].num;

		for (int j = 0; j < i; j++){
			if (input[i].num == input[j].num){
				input[j].mode++;
				break;
			}
		}

		input[i].mode++;

		average += input[i].num;
	}

	sort(input, input + N, numCompare);

	range = input[N - 1].num - input[0].num;

	cout << floor((average / N) + 0.5) << endl;
	cout << input[N / 2].num << endl;

	sort(input, input + N, modeCompare);

	if (N == 1){
		cout << input[0].num << endl;
	}
	else{
		for (int i = N; i > 0; i--){
			if (input[i - 1].mode != input[i - 2].mode){
				idx = i;
				break;
			}
		}

		if (idx == N){
			cout << input[idx - 1].num << endl;
		}
		else{
			cout << input[idx].num << endl;
		}
	}

	cout << range << endl;
	
	return 0;
}

bool numCompare(Input &input1, Input &input2){

	if (input1.num < input2.num){
		return true;
	}
	else{
		return false;
	}
}

bool modeCompare(Input &input1, Input &input2){

	if (input1.mode < input2.mode){
		return true;
	}
	else{
		if (input1.mode == input2.mode && input1.num < input2.num){
			return true;
		}

		return false;
	}
}