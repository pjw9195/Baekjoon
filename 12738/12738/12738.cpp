#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int count = 0;
	vector <long long> v1;
	int num = 0;
	long long temp;
	cin >> num;
	v1.push_back(-1000000001);
	for (int i = 0; i < num; i++) {
		cin >> temp;
		if (v1.back() < temp) {
			v1.push_back(temp);
			count++;
		}
		else {
			auto it = lower_bound(v1.begin(), v1.end(), temp);
			*it = temp;
		}
	}
	cout << count;
}