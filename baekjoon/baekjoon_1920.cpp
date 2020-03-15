#include <iostream>
#include <algorithm>

using namespace std;

int binary_search(int data[], int size, int d);

int main(){

	int N, M;
	int* A, *num;
	int check = 0;
	
	scanf("%d", &N);

	A = new int[N];

	for (int i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}

	sort(A, A + N);

	scanf("%d", &M);

	num = new int[M];

	for (int i = 0; i < M; i++){
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < M; i++){
		printf("%d\n", binary_search(A, N, num[i]));
	}

	return 0;
}

int binary_search(int data[], int size, int d){
	int s = 0;
	int e = size - 1;
	int m;

	while (s <= e){
		m = (s + e) / 2;
		if (data[m] == d) return 1;
		else if (data[m] > d) e = m - 1;
		else s = m + 1;
	}

	return 0;
}