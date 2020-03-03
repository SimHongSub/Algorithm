#include <iostream>
#include <vector>

using namespace std;

int fiveCount(int num);
int twoCount(int num);

int main(){

	int n, m;
	int five_num, two_num = 0;

	scanf("%d %d", &n, &m);

	five_num = fiveCount(n);
	five_num -= fiveCount(m);
	five_num -= fiveCount(n - m);
	
	two_num = twoCount(n);
	two_num -= twoCount(m);
		
	two_num -= twoCount(n - m);

	if (five_num > two_num){
		printf("%d", two_num);
	}
	else{
		printf("%d", five_num);
	}

	return 0;
}

int fiveCount(int num){
	int count = 0;

	for (long long i = 5; num / i >= 1; i *= 5){
		count += num / i;
	}

	return count;
}

int twoCount(int num){
	int count = 0;

	for (long long i = 2; num / i >= 1; i *= 2){
		count += num / i;
	}

	return count;
}
