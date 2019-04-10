#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int start, vector<int> graph[], bool check[]);
void bfs(int start, vector<int> graph[], bool check[]);

int main(){

	int N, M, V;

	scanf("%d %d %d", &N, &M, &V);

	vector<int> *graph = new vector<int>[N + 1];
	bool *check = new bool[N + 1];
	fill(check, check + N + 1, false);
	
	for (int i = 0; i < M; i++){
		int u, v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i <= N; i++){
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(V, graph, check);
	printf("\n");

	fill(check, check + N + 1, false);

	bfs(V, graph, check);
	printf("\n");

	return 0;
}

void dfs(int start, vector<int> graph[], bool check[]){

	stack<int> s;
	s.push(start);
	check[start] = true;
	printf("%d ", start);

	while (!s.empty()){

		int current_node = s.top();
		s.pop();
		for (int i = 0; i<graph[current_node].size(); i++){

			int next_node = graph[current_node][i];

			if (check[next_node] == false){
				printf("%d ", next_node);
				check[next_node] = true;
				s.push(current_node);
				s.push(next_node);
				break;
			}
		}
	}
}

void bfs(int start, vector<int> graph[], bool check[]){
	queue<int> q;

	q.push(start);
	check[start] = true;

	while (!q.empty()){
		int tmp = q.front();
		q.pop();
		printf("%d ", tmp);
		for (int i = 0; i<graph[tmp].size(); i++){

			if (check[graph[tmp][i]] == false){
				q.push(graph[tmp][i]);
				check[graph[tmp][i]] = true;
			}
		}
	}
}