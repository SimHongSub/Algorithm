#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){

	int N;
	string s;
	stack<int> stack;

	scanf("%d", &N);

	for (int i = -1; i < N; i++){
		getline(cin, s, '\n');

		if (s.find("push") != string::npos){
			s.erase(0, 4);
			stack.push(stoi(s));
		}
		else if (s.find("pop") != string::npos){
			if (stack.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n", stack.top());
				stack.pop();
			}
		}
		else if (s.find("size") != string::npos){
			printf("%d\n", stack.size());
		}
		else if (s.find("empty") != string::npos){
			printf("%d\n", stack.empty());
		}
		else if (s.find("top") != string::npos){
			if (stack.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n", stack.top());
			}
		}
	}

	return 0;
}