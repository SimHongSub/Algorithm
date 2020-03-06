#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector< vector< vector<int> > > combination_values;
vector<int> combination(int n, int r);

int main(){

	int n, m;
	vector<int> first;
	vector<int> result;

	first.push_back(1);

	vector<vector<int>> vc;

	vc.push_back(first);

	combination_values.push_back(vc);
	
	scanf("%d %d", &n, &m);

	result = combination(n, m);

	for (int i = 0; i < result.size(); i++){
		printf("%d", result[i]);
	}

	return 0;
}

vector<int> combination(int n, int r){
	if (n == 1 || n == r){
		return combination_values[0][0];
	}

	if (!combination_values[n][r].empty()){
		return combination_values[n][r];
	}else{
		if (!combination_values[n - 1][r - 1].empty() && !combination_values[n - 1][r].empty()){
			if (combination_values[n - 1][r - 1].size() > combination_values[n - 1][r].size()){
				for (int i = 0; i < combination_values[n - 1][r - 1].size(); i++){
					if (i <= combination_values[n - 1][r].size()){
						if (combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i] >= 10){
							int temp = combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i];
							while (temp >= 10){
								combination_values[n - 1][r - 1][i] += 1;
								temp = temp - 10;
							}
							combination_values[n][r].insert(combination_values[n][r].begin(), temp);
						}
						else{
							combination_values[n][r].insert(combination_values[n][r].begin(), combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i]);
						}
					}
					else{
						combination_values[n][r].insert(combination_values[n][r].begin(), combination_values[n - 1][r - 1][i]);
					}
				}
			}
			else{
				for (int i = 0; i < combination_values[n - 1][r].size(); i++){
					if (i <= combination_values[n - 1][r - 1].size()){
						if (combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i] >= 10){
							int temp = combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i];
							while (temp >= 10){
								combination_values[n - 1][r - 1][i] += 1;
								temp = temp - 10;
							}
							combination_values[n][r].insert(combination_values[n][r].begin(), temp);
						}
						else{
							combination_values[n][r].insert(combination_values[n][r].begin(), combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i]);
						}
					}
					else{
						combination_values[n][r].insert(combination_values[n][r].begin(), combination_values[n - 1][r][i]);
					}
				}
			}
		}else{
			if (combination_values[n - 1][r - 1].empty()){
				combination(n - 1, r - 1);
			}
			if (combination_values[n - 1][r].empty()){
				combination(n - 1, r);
			}

			if (combination_values[n - 1][r - 1].size() > combination_values[n - 1][r].size()){
				for (int i = 0; i < combination_values[n - 1][r - 1].size(); i++){
					if (i <= combination_values[n - 1][r].size()){
						if (combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i] >= 10){
							int temp = combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i];
							while (temp >= 10){
								combination_values[n - 1][r - 1][i] += 1;
								temp = temp - 10;
							}
							combination_values[n][r].insert(combination_values[n][r].begin(), temp);
						}
						else{
							combination_values[n][r].insert(combination_values[n][r].begin(), combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i]);
						}
					}
					else{
						combination_values[n][r].insert(combination_values[n][r].begin(), combination_values[n - 1][r - 1][i]);
					}
				}
			}
			else{
				for (int i = 0; i < combination_values[n - 1][r].size(); i++){
					if (i <= combination_values[n - 1][r - 1].size()){
						if (combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i] >= 10){
							int temp = combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i];
							while (temp >= 10){
								combination_values[n - 1][r - 1][i] += 1;
								temp = temp - 10;
							}
							combination_values[n][r].insert(combination_values[n][r].begin(), temp);
						}
						else{
							combination_values[n][r].insert(combination_values[n][r].begin(), combination_values[n - 1][r - 1][i] + combination_values[n - 1][r][i]);
						}
					}
					else{
						combination_values[n][r].insert(combination_values[n][r].begin(), combination_values[n - 1][r][i]);
					}
				}
			}
		}

		return combination_values[n][r];
	}
}