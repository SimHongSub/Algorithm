#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int N;
int col[15];
int result = 0;

void dfs(int start);

int main(){

	scanf("%d", &N);

	dfs(0);

	printf("%d", result);

	return 0;
}

void dfs(int start){

	int check = 0;

	if (start == N){
		result++;
	}
	else{
		for (int i = 0; i < N; i++){
			col[start] = i;

			for (int j = 0; j < start; j++){
				if (col[j] == col[start] || abs(col[start] - col[j]) == (start - j)){
					check = 1;
					break;
				}
			}

			if (check == 0){
				dfs(start + 1);
			}
			else{
				check = 0;
			}
		}
	}
}