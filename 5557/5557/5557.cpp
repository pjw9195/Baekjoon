#include<iostream>
#include<queue>
using namespace std;
int arr[102];
long long D[102][21];
int res = 0;
int N;

int main() {
	int sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	D[0][arr[0]] = 1;
	for (int i = 1; i <= N-2; i++) {
		for (int j = 0; j <= 20; j++) {
			if (D[i - 1][j] > 0) {
				if (j - arr[i] >= 0) {
					D[i][j - arr[i]] = D[i][j - arr[i]] + D[i - 1][j];
				}
				if (j + arr[i] <= 20) {
					D[i][j + arr[i]] = D[i][j + arr[i]] + D[i - 1][j];
				}
			}
		}
	}
	long long ans = D[N - 2][arr[N - 1]];
	cout << ans<<'\n';
	return 0;
}