#include <iostream>

using namespace std;

int main()
{
	double inputA, inputB;

	scanf("%lf %lf", &inputA, &inputB);

	printf("%.9lf\n", inputA / inputB);

	return 0;
}

//입력 : scanf, 출력 : printf 사용할 것