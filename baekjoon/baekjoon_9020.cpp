#include <iostream>

using namespace std;

struct Result{
	int partition[2];
	int sub;
};

bool *check;

void Check(int size);

int main(){

	int T, input;
	Result result;

	scanf("%d", &T);

	for (int i = 0; i < T; i++){
		scanf("%d", &input);

		Check(input);

		result.sub = -1;

		for (int j = 2; j < input; j++){
			if (check[j]){
				if (check[input - j]){
					if (result.sub == -1){
						result.partition[0] = j;
						result.partition[1] = input - j;
						result.sub = input - 2 * j;
					}
					else{
						if (result.sub > input - 2 * j && input - 2 * j >= 0){
							result.partition[0] = j;
							result.partition[1] = input - j;
							result.sub = input - 2 * j;
						}
					}
				}
			}
		}

		printf("%d %d\n", result.partition[0], result.partition[1]);
	}

	return 0;
}

void Check(int size){

	check = new bool[size + 1];

	fill_n(check, size + 1, true);

	check[1] = false;

	for (int i = 2; i <= size; i++){
		if (check[i]){
			for (int j = i * 2; j <= size; j += i){
				check[j] = false;
			}
		}
	}
}