#include<iostream>

using namespace std;
int arr[11];
int main() {
	int N, K;
	int res = 0;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = N - 1; i >= 0; i--) {
		if (arr[i] > K) continue;
		while (1) {
			if (arr[i] <= K) {
				K = K - arr[i];
				res++;
			}
			else break;
		}
		if (K == 0) break;
	}
	cout << res;

}