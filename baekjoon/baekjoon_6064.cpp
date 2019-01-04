#include <iostream>

using namespace std;

int main(){
	int T;
	int M, N, inputX, inputY;
	int result;
	int x, y;

	cin >> T;

	for (int i = 0; i < T; i++){
		cin >> M >> N >> inputX >> inputY;
		x = 1;
		y = 1;
		result = 1;

		while (1){
			if (x == inputX && y == inputY){
				cout << result << endl;
				break;
			}
			else{
				if (x < M && y < N){
					x += 1;
					y += 1;
				}
				else if (x >= M && y < N){
					x = 1;
					y += 1;
				}
				else if (x < M && y >= N){
					x += 1;
					y = 1;
				}
				else{
					result = -1;
					cout << result << endl;
					break;
				}

				result++;
			}
		}
	}

	return 0;
}