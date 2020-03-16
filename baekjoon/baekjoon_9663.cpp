#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(int start, vector<int> graph[], bool check[]);

int main(){

	int N;
	int board[15][15];
	int num_queen = 1;

	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			
		}
	}

	return 0;
}

void dfs(int start, vector<int> graph[], bool check[]){
	stack<int> s;
	s.push(start);
	check[start] = true;
	
	while (!s.empty()){
		int current_node = s.top();
		s.pop();

		for (int i = 0; i < graph[current_node].size(); i++){
			int next_node = graph[current_node][i];
		}
	}
}