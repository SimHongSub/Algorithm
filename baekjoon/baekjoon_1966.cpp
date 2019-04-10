#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Print{
	int num;
	int importance;
};
int main(){

	int testCase;
	int N, M, count, check;
	Print print;
	vector<Print> v;

	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++){

		scanf("%d %d", &N, &M);

		for (int j = 0; j < N; j++){
			scanf("%d", &print.importance);
			print.num = j;

			v.push_back(print);
		}

		count = 0;

		while (!v.empty()){
			check = 0;
			for (int k = 1; k < v.size(); k++){
				if (v[0].importance < v[k].importance){
					Print temp = v.front();
					v.erase(v.begin());
					v.push_back(temp);
					check = 1;
					break;
				}
			}

			if (check == 0){
				if (v[0].num == M){
					count++;
					printf("%d\n", count);
					v.clear();
					break;
				}
				else{
					count++;
					v.erase(v.begin());
				}
			}
		}	
	}

	return 0;
}