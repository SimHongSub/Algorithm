#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

	int N, input;
	int arithmetic = 0, range = 0;
	float result;
	int modeN[4001] = { 0, }, modeP[4001] = {0,}, modeNe=0, modeNIndex =0, modePo=0, modePIndex=0, mode;

	cin >> N;

	int* median = new int[N];
	
	for (int i = 0; i < N; i++){
		cin >> input;

		arithmetic += input;
		median[i] = input;

		if (input < 0){
			modeN[abs(input)]++;
		}
		else{
			modeP[input]++;
		}
	}

	for (int i = 1; i <= 4000; i++){
		if (modeNe < modeN[i]){
			modeNe = modeN[i];
			modeNIndex = i;
		}

		if (modePo < modeP[i]){
			modePo = modeP[i];
			modePIndex = i;
		}
	}

	if (modeNe > modePo){
		mode = -modeNIndex;
	}
	else{
		mode = modePIndex;
	}

	sort(median, median + N);

	result = arithmetic / N;
	range = median[N - 1] - median[0];

	printf("%d\n", ceil(result));
	printf("%d\n", median[N/2]);
	printf("%d\n", mode);
	printf("%d\n", range);

	return 0;
}