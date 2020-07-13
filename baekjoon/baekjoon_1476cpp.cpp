#include <iostream>

using namespace std;

int main(){

	int E = 1, S = 1, M = 1, result = 1;
	int input_E, input_S, input_M;

	scanf("%d", &input_E);
	scanf("%d", &input_S);
	scanf("%d", &input_M);

	while (1){
		if (E == input_E && S == input_S && M == input_M){
			break;
		}

		if (E >= 1 && E < 15){
			E++;
		}
		else{
			E = 1;
		}

		if (S >= 1 && S < 28){
			S++;
		}
		else{
			S = 1;
		}

		if (M >= 1 && M < 19){
			M++;
		}
		else{
			M = 1;
		}

		result++;
	}

	printf("%d", result);

	return 0;
}