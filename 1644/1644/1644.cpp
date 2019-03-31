#include<iostream>
#include<vector>
using namespace std;
long long arr[4000001] = {0};
vector <long long>  v1;
int inc = 0;
long long sum = 0;
int N;
int main() {
	cin >> N;

	for (long long i = 2; i <= N; i++) {
		if (arr[i] == 0) {
			v1.push_back(i);
			for (long long j = i*i; j <= N; j= j + i) {
				arr[j] = 1;
			}
		}
	}
	for (int i = 0; i < v1.size(); i++) {
		for (int j = i; j < v1.size(); j++) {
			sum = v1[j] + sum;
			if (sum == N) {
				inc++;
				sum = 0;
				break;
			}
			if (sum > N) { break; }
		}
		sum = 0;
	}
	cout << inc;
}