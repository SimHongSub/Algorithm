#include <iostream>
#include <math.h>

using namespace std;

int main(){

	int numOfTest;
	double x, y, distance;
	int k, temp, result;
	
	scanf("%d", &numOfTest);

	for (int i = 0; i < numOfTest; i++){
		scanf("%lf %lf", &x, &y);

		distance = y - x;
		k = sqrt(distance);
		printf("%d\n", k);
		result = 1;

		while (1){
			if (k*k >= distance){
				if (temp < (k*k) - distance){
					printf("%d\n", result - 1);
				}
				else{
					printf("%d\n", result);
				}
				break;
			}
			k++;
			temp = ((k*k) - ((k - 1)*(k - 1))) / 2;
			result += 2;
		}
	}

	return 0;
}