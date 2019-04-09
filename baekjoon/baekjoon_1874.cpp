#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <memory.h>

using namespace std;

int *sequence;

int main(){

	int N;
	int *temp;
	vector<char> result;
	stack<int> stack;

	scanf("%d", &N);

	sequence = new int[N];
	temp = new int[N];

	for (int i = 0; i < N; i++){
		scanf("%d", &sequence[i]);
		temp[i] = sequence[i];
	}

	sort(temp, temp + N);

	for (int i = 0; i < N; i++){
		if (i == 0){
			for (int j = 0; j < sequence[i]; j++){
				stack.push(temp[j]);
				temp[j] = 0;
				result.push_back('+');
			}

			stack.pop();
			result.push_back('-');
		}
		else{
			if (stack.empty()){
				for (int j = sequence[i - 1]; j < sequence[i]; j++){
					if (temp[j] != 0){
						stack.push(temp[j]);
						temp[j] = 0;
						result.push_back('+');
					}
				}

				stack.pop();
				result.push_back('-');
			}
			else{
				if (stack.top() == sequence[i]){
					stack.pop();
					result.push_back('-');
				}
				else if (stack.top() < sequence[i]){
					for (int j = sequence[i - 1]; j < sequence[i]; j++){
						if (temp[j] != 0){
							stack.push(temp[j]);
							temp[j] = 0;
							result.push_back('+');
						}
					}

					stack.pop();
					result.push_back('-');
				}
				else{
					printf("NO\n");
					exit(0);
				}
			}	
		}
	}

	for (int i = 0; i < result.size(); i++){
		printf("%c\n", result[i]);
	}

	return 0;
}