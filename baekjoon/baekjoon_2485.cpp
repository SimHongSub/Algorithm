#include <iostream>

using namespace std;

int gcd(int a, int b);

int main(){

	int N;
	int first_loacation, first_end_distance;
	int previous_location, present_location;
	int gcd_value, least_count, all_count;
	int* distances;

	scanf("%d", &N);
	
	scanf("%d", &previous_location);
	first_loacation = previous_location;

	distances = new int[N-1];

	for (int i = 0; i < N-1; i++){
		scanf("%d", &present_location);

		distances[i] = present_location - previous_location;

		previous_location = present_location;

		if (i == N - 2){
			first_end_distance = present_location - first_loacation;
		}
	}

	gcd_value = gcd(distances[0], distances[1]);

	for (int i = 2; i < N - 1; i++){
		gcd_value = gcd(gcd_value, distances[i]);
	}

	all_count = (first_end_distance / gcd_value) + 1;

	least_count = all_count - N;

	printf("%d\n", least_count);

	delete[] distances;

	return 0;
}

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