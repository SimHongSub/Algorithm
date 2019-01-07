#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int N, input;
	vector<int> v;

	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++){
		cout << v.at(i) << endl;
	}

	return 0;
}