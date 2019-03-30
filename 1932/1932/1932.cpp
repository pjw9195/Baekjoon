#include<iostream>
#include<algorithm>
using namespace std;
int d[501][501];

int main() {
	int N;
	int sum = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> d[i][j];
			if (j == 1) {
				d[i][j] = d[i][j] + d[i - 1][j];
			}
			else if (j == i) {
				d[i][j] = d[i][j] + d[i - 1][j - 1];
			}
			else {
				d[i][j] = d[i][j] + max(d[i - 1][j], d[i - 1][j - 1]);
			}
			if (sum < d[i][j]) {
				sum = d[i][j];
			}
		}
	}
	cout << sum;
}