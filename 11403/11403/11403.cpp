#include<iostream>
#include<queue>
using namespace std;
int arr[101][101];
int visit[101][101];
int N;
void DFS(int a,int n) {
	for (int i = 0; i < N; i++) {
		if (arr[a][i] == 1 && visit[n][i] == 0) {
			visit[n][i] = 1;
			DFS(i,n);
		}
	}
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		DFS(i, i);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << visit[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}