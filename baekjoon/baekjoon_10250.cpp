#include <iostream>

using namespace std;

int main(){

	int num_Test;
	int height, num_Room, seq;

	cin >> num_Test;

	for (int i = 0; i < num_Test; i++){
		cin >> height >> num_Room >> seq;
		seq--;

		printf("%d%02d\n", seq % height + 1, seq / height + 1);
	}

	return 0;
}