#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int N;
	vector<int> permutation;

	scanf("%d", &N);

	for (int i = 0; i < N; i++){

		permutation.push_back(i+1);
	}

	do{
		for (auto it : permutation){
			printf("%d ", it);
		}
		
		printf("\n");

	} while (next_permutation(permutation.begin(), permutation.end()));

	return 0;
}