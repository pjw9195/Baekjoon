#include<iostream>
using namespace std;
int arr[51][51] = {0};
int M = 0;
int N = 0;
int a[4] = { 0,0,1,-1 };
int b[4] = { 1,-1,0,0 };
void DFS(int x, int y) {
	arr[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		if (x + a[i] < 0 || y + b[i] < 0 || x + a[i] >= M || y + b[i] >= N) continue;
		if (arr[x + a[i]][y + b[i]] == 0) continue;
		DFS(x + a[i], y + b[i]);
	}
}
int main() {
	int T;
	int K;
	cin >> T;
	int x, y;
	for (int g = 0; g < T; g++) {
		cin >> M >> N >> K;
		int res = 0;
		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			arr[x][y] = 1;
		}
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (arr[i][j] == 1) {
					res++;
					DFS(i, j);
				}
			}
		}
		cout << res << '\n';
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				arr[i][j] = 0;
			}
		}


	}
	
}