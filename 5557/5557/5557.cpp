#include<iostream>
#include<queue>
using namespace std;
int arr[501];
int res = 0;
int N,K;
void DFS(int a,int b) {
	if (b == N - 1) {
		if (a == K) {
			res++;
		}
		return;
	}
	if (a + arr[b] >= 0 && a + arr[b] <= 20) {
		DFS(a + arr[b], b + 1);
	}
	if (a - arr[b] >= 0 && a - arr[b] <= 20) {
		DFS(a - arr[b], b + 1);
	}
}

int main() {
	int x, y;
	int sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	K = arr[N - 1];
	DFS(arr[0], 1);
	cout << res;
}