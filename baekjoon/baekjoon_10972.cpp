#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int N, input;
	vector<int> permutation;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		scanf("%d", &input);

		permutation.push_back(input);
	}

	if (next_permutation(permutation.begin(), permutation.end())){
		for (auto it : permutation){
			printf("%d ", it);
		}
	}
	else{
		printf("-1");
	}

	return 0;
}