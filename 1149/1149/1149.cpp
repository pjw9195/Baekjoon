#include<iostream>
#include<algorithm>
using namespace std;
int D[1002][3];
int arr[1002][3];
int main() {
	int N;
	int sum;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
			if (i == 0) {
				D[i][j] = arr[i][j];
			}
		}
	}
	for (int i = 1; i < N; i++) {
			D[i][0] = arr[i][0] + min(D[i - 1][1], D[i - 1][2]);
			D[i][1] = arr[i][1] + min(D[i - 1][0], D[i - 1][2]);
			D[i][2] = arr[i][2] + min(D[i - 1][0], D[i - 1][1]);
		}
	sum = D[N - 1][0];
	for (int i = 0; i < 3; i++) {
		if (sum > D[N-1][i]) {
			sum = D[N-1][i];
		}
	}
	cout << sum;
	
}