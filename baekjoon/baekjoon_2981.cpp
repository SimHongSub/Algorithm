//나머지가 모두 같게 되는 M모두 찾기
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int gcd(int a, int b);

int main(){

	int N;
	int numbers[100];
	int gcd_value;
	vector<int> result;

	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		scanf("%d", &numbers[i]);
	}

	sort(numbers, numbers + N);

	gcd_value = numbers[1] - numbers[0];

	for (int i = 2; i < N; i++){
		gcd_value = gcd(gcd_value, numbers[i] - numbers[i-1]);
	}

	for (int i = 1; i * i <= gcd_value; i++){
		if (gcd_value % i == 0){
			result.push_back(i);
			if (i != gcd_value / i){
				result.push_back(gcd_value / i);
			}
		}
	}

	sort(result.begin(), result.end());

	for (int i = 1; i < result.size(); i++){
		printf("%d ", result[i]);
	}

	return 0;
}

//유클리드 호제법 - 최대공약수 구하기 알고리즘
int gcd(int a, int b)
{
	int c;

	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}