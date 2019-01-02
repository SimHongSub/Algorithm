#include <iostream>
#include <math.h>

using namespace std;

int main(){

	int numOfTest;
	int x, y, distance;
	int k, temp, result;
	
	scanf("%d", &numOfTest);

	for (int i = 0; i < numOfTest; i++){
		scanf("%d %d", &x, &y);

		distance = y - x;
		k = sqrt((double)distance);

		if ((k*k) != distance){
			k += 1;
		}

		result = 2 * k - 1;
		temp = ((k*k) - ((k - 1)*(k - 1))) / 2;

		if (temp < (k * k) - distance){
			printf("%d\n", result - 1);
		}
		else{
			printf("%d\n", result);
		}
	}

	return 0;
}