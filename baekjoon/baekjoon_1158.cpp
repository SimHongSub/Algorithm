#include <iostream>
#include <vector>

using namespace std;

int main(){

	int N, K, index;
	vector<int> v;
	int *result;

	scanf("%d %d", &N, &K);

	result = new int[N];

	index = K - 1;

	for (int i = 1; i <= N; i++){
		v.push_back(i);
	}

	for (int i = 0; i < N; i++){
		if (index < v.size()){
			result[i] = v[index];
			v.erase(v.begin() + index);
			index += K - 1;
		}
		else{
			while (1){
				index = index - v.size();

				if (index < v.size()){
					break;
				}
			}

			result[i] = v[index];
			v.erase(v.begin() + index);
			index += K - 1;
		}
	}

	printf("<");

	for (int i = 0; i < N - 1; i++){
		printf("%d, ", result[i]);
	}

	printf("%d>\n", result[N - 1]);

	return 0;
}