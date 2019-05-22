#include<iostream>
#include<algorithm>
using namespace std;
int arr[1001];
int main() {
	int T, N;
	int maxx = -1001;
	int sum = 0;
	int temp = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> temp;
			sum = sum + temp;
			maxx = max(sum, maxx);
			if (maxx < sum) {
				maxx = sum;
			}
			if (sum < 0) {
				sum = 0;
			}
		}
		cout << maxx << '\n';
		maxx = -1001;
		sum = 0;
	}
}