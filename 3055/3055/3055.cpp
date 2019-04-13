#include<iostream>
#include<queue>
using namespace std;
queue <pair<int, int>> que;
char arr[51][51] = { 0 };
int visit[51][51] = { 0 };
int a[4] = { 0,0,-1,1 };
int b[4] = { 1,-1, 0,0 };
int main() {
	int R, C;
	int res = 0;
	char x;
	char temp = '*';
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> x;
			if (x == 'S') {
				que.push(pair<int, int>(i, j));
			}
			arr[i][j] = x;
		}
	}
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (arr[i][j] == '*') {
				que.push(pair<int, int>(i, j));
			}
		}
	}
	while (!que.empty()) {
		int x = que.front().first;
		int y = que.front().second;
		if (arr[x][y] == '*') {
			for (int i = 0; i < 4; i++) {
				if (x + a[i] < 0 || x + a[i] >= R || y + b[i] < 0 || y + b[i] >= C || arr[x + a[i]][y + b[i]] == '*' ||  arr[x + a[i]][y + b[i]] == 'D' || arr[x + a[i]][y + b[i]] == 'X') {
					continue;
				}
				if (arr[x + a[i]][y + b[i]] == 'S') {
					arr[x + a[i]][y + b[i]] = 'K';
				}
				else {
					arr[x + a[i]][y + b[i]] = '*';
				}
				que.push(pair<int, int>(x + a[i], y + b[i]));
			}
		}
		else {
			if (arr[x][y] == 'K') {
				arr[x][y] = '*';
				que.pop();
				continue;
			}
			for (int i = 0; i < 4; i++) {
				if (x + a[i] < 0 || x + a[i] >= R || y + b[i] < 0 || y + b[i] >= C || arr[x + a[i]][y + b[i]] == '*' || arr[x + a[i]][y + b[i]] == 'S' || arr[x + a[i]][y + b[i]] == 'X') {
					continue;
				}

				visit[x + a[i]][y + b[i]] = visit[x][y] + 1;
				if (arr[x + a[i]][y + b[i]] == 'D') {
					cout << visit[x + a[i]][y + b[i]];
					return 0;
				}
				arr[x + a[i]][y + b[i]] = 'S';
				que.push(pair<int, int>(x + a[i], y + b[i]));

			}
		}
		que.pop();
		if (que.empty()) {
			cout << "KAKTUS";
			return 0;
		}
	}
}