#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;

int main() {
	int arr[1002][1002] = { 1 };
	int map[1002][1002] = { 0 };
	int a[4] = { 0, 0, 1, -1 };
	int b[4] = { 1, -1, 0, 0 };
	queue<pair<int, int>> que;
	int M, N;
	int x, y;
	cin >> M >> N;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &arr[i][j]);
			if (i == 0 && arr[i][j] == 0) {
				que.push(pair<int, int>(i, j));
				map[i][j] = 1;
			}
		}
	}
	
	while (!que.empty()) {
		x = que.front().first;
		y = que.front().second;
		if (x == M - 1) {
			cout << "YES";
			return 0;
		}
		for (int i = 0; i < 4; i++) {
			if (x + a[i] <0 || y + b[i] <0 || x + a[i] >= M || y + b[i] >= N) {
				continue;
			}
			if (arr[x + a[i]][y + b[i]] == 0 && map[x + a[i]][y + b[i]] == 0) {
				que.push(pair<int, int>(x + a[i], y + b[i]));
				map[x+a[i]][y + b[i]] = 1;
			}
		}
		que.pop();
	}
	cout << "NO";
	return 0;
}