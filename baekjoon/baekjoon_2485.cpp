#include <iostream>

using namespace std;

int gcd(int a, int b);

int main(){

	int N;
	int first_Loacation, first_End_Distance;
	int previous_Lcation, present_Location;
	int gcd_Value, least_Count, all_Count;
	int* distances;

	scanf("%d", &N);
	
	scanf("%d", &previous_Lcation);
	first_Loacation = previous_Lcation;

	distances = new int[N-1];

	for (int i = 0; i < N-1; i++){
		scanf("%d", &present_Location);

		distances[i] = present_Location - previous_Lcation;

		previous_Lcation = present_Location;

		if (i == N - 2){
			first_End_Distance = present_Location - first_Loacation + 1;
		}
	}

	gcd_Value = gcd(distances[0], distances[1]);

	for (int i = 2; i < N - 1; i++){
		gcd_Value = gcd(gcd_Value, distances[i]);
	}

	if (first_End_Distance % gcd_Value == 0){
		all_Count = first_End_Distance / gcd_Value;
	}else{
		all_Count = (first_End_Distance / gcd_Value) + 1;
	}

	least_Count = all_Count - N;

	printf("%d\n", least_Count);

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