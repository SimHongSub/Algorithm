#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){

	int T;
	string s;

	scanf("%d", &T);

	for (int i = 0; i < T; i++){
		cin >> s;

		stack<char> stack;

		if (s.at(0) == ')'){
			printf("NO\n");
		}
		else{
			for (int j = 0; j < s.length(); j++){
				if (s.at(j) == '('){
					stack.push(s.at(j));
				}
				else{
					if (stack.empty()){
						stack.push(s.at(j));
						break;
					}
					else{
						stack.pop();
					}
				}
			}

			if (stack.empty()){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}

	return 0;
}