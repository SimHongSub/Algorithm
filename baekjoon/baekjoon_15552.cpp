#include <iostream>

using namespace std;

int main(){

	int numOfTestCase, inputA, inputB;

	scanf("%d", &numOfTestCase);

	for (int i = 0; i < numOfTestCase; i++){
		scanf("%d %d", &inputA, &inputB);
		printf("%d\n", inputA + inputB);
	}

	return 0;
}