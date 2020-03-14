#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void big_int_sum(string a, string b);

int main(){

	string A, B;

	cin >> A >> B;

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	big_int_sum(A, B);

	return 0;
}

void big_int_sum(string a, string b){
	int temp = 0;
	vector<int> result;

	if (a.size() > b.size()){
		for (int i = 0; i < a.size(); i++){
			if (i < b.size()){
				int sub_a = a.at(i) - '0';
				int sub_b = b.at(i) - '0';
				int sub_sum = sub_a + sub_b + temp;

				temp = sub_sum / 10;
				sub_sum = sub_sum % 10;

				result.push_back(sub_sum);
			}else{
				if (temp != 0){
					int sub_a = a.at(i) - '0';
					int sub_sum = sub_a + temp;

					temp = sub_sum / 10;
					sub_sum = sub_sum % 10;

					result.push_back(sub_sum);
				}else{
					result.push_back(a.at(i) - '0');
				}
			}
		}
	}else{
		for (int i = 0; i < b.size(); i++){
			if (i < a.size()){
				int sub_a = a.at(i) - '0';
				int sub_b = b.at(i) - '0';
				int sub_sum = sub_a + sub_b + temp;

				temp = sub_sum / 10;
				sub_sum = sub_sum % 10;

				result.push_back(sub_sum);
			}
			else{
				if (temp != 0){
					int sub_b = b.at(i) - '0';
					int sub_sum = sub_b + temp;

					temp = sub_sum / 10;
					sub_sum = sub_sum % 10;

					result.push_back(sub_sum);
				}
				else{
					result.push_back(b.at(i) - '0');
				}
			}
		}
	}

	if (temp != 0){
		result.push_back(temp);
	}

	reverse(result.begin(), result.end());

	for (int i = 0; i < result.size(); i++){
		printf("%d", result[i]);
	}
}