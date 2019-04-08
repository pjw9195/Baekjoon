#include<iostream>
#include<algorithm>
using namespace std;
int arr[101][101];
int N;
int maxx = 0;
int res = 0;
int x[4] = { 0,0,-1,1 };
int y[4] = { 1,-1,0,0 };
int visit[101][101] = { 0 };
void DFS(int a,int b,int k) {
	visit[a][b] = 1;
	for (int i = 0; i < 4; i++) {
		if (a + x[i] < 0 || b + y[i] < 0 || a + x[i] >= N || b + y[i] >= N || visit[a+x[i]][b+y[i]] == 1 ||arr[a+x[i]][b+y[i]] <= k) {
			continue;
		}
		DFS(a + x[i], b + y[i], k);
	}
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	for (int k = 1; k <= 100; k++) {
		res = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (arr[i][j] > k && visit[i][j] == 0) {
					res++;
					DFS(i, j, k);
				}
			}
		}
		maxx = max(res, maxx);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				visit[i][j] = 0;
			}
		}
	}
	if (maxx == 0) {
		cout << 1;
		return 0;
	}
	cout << maxx;
	return 0;
}
//DFS