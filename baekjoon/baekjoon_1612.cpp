#include <iostream>

using namespace std;

void print_num_count(long long N, int mul_num);

int main(){

	int N;
	int first_num;

	scanf("%d", &N);

	first_num = N % 10;

	if (first_num == 1){
		print_num_count(N, 1);
	}else if (first_num == 3){
		print_num_count(N, 7);
	}else if (first_num == 7){
		print_num_count(N, 3);
	}else if (first_num == 9){
		print_num_count(N, 9);
	}else{
		printf("%d", -1);
	}

	return 0;
}

void print_num_count(long long N, int mul_num){
	long long copy_N = N;
	int repeat_count = 0;
	int num_count = 0;

	while (1){
		while (copy_N != 0){
			int temp = copy_N % 10;

			if (temp == 1){
				copy_N = copy_N / 10;
				num_count++;
			}
			else{
				num_count = 0;
				break;
			}
		}

		if (num_count != 0){
			break;
		}
		else{
			copy_N = N * (mul_num + (10 * repeat_count));
			repeat_count++;
		}
	}

	printf("%d", num_count);
}