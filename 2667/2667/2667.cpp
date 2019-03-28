#include<iostream>
#include<vector>
#include<algorithm>
#include <functional>

using namespace std;
int map[26][26];
int sor[10000] = {0};
int a[4] = { 0,0,1,-1 };
int b[4] = { 1,-1,0,0 };
int N;
int res = 0;
int temp = 0;

void DFS(int x, int y) {
	map[x][y] = 0;
	int i;
	for (i = 0; i < 4; i++) {
		if (x + a[i] >= N || y + b[i] >= N || x + a[i]  < 0 || y + b[i] < 0 || map[x+a[i]][y+b[i]] == 0) {
			continue;
		}
		DFS(x + a[i], y + b[i]);
		sor[temp]++;
	}
}
int main() {
	cin >> N;
	for (int i = 0; i< N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	for (int i = 0; i< N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] != 0) { 
				DFS(i, j);
				res++;
				temp++;
			}
		}
	}
	sort(sor, sor+ 10000, greater<int>());
	cout << res << '\n';
	for (int i = res-1; i >= 0; i--) {
		cout << sor[i] << '\n';
	}
}