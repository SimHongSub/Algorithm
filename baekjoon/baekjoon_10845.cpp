#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){

	int N;
	string s;
	queue<int> queue;

	scanf("%d", &N);

	for (int i = -1; i < N; i++){
		getline(cin, s, '\n');

		if (s.find("push") != string::npos){
			s.erase(0, 4);
			queue.push(stoi(s));
		}
		else if (s.find("pop") != string::npos){
			if (queue.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n", queue.front());
				queue.pop();
			}
		}
		else if (s.find("size") != string::npos){
			printf("%d\n", queue.size());
		}
		else if (s.find("empty") != string::npos){
			printf("%d\n", queue.empty());
		}
		else if (s.find("front") != string::npos){
			if (queue.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n", queue.front());
			}
		}
		else if (s.find("back") != string::npos){
			if (queue.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n", queue.back());
			}
		}
	}

	return 0;
}