#include<iostream>
#include<queue>

using namespace std;

queue< pair<int, int> > que;
int a[4] = { 1,0,-1,0 };
int b[4] = { 0,1,0,-1 };

void tomato() {
	int array[1000][1000];
	int i, j;
	int M, N;
	int count = 0;
	int day = 0;
	cin >> M >> N;


	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cin >> array[i][j];
			if (array[i][j] == 1)
			{
				que.push(pair<int, int>(i, j));

			}
		}
	}
	while (!que.empty()) {
		int x = que.front().first;
		int y = que.front().second;
		day = array[x][y];
		for (int i = 0; i < 4; i++)
		{
			if (x + a[i] < 0 || y + b[i] < 0 || x + a[i] >= N || y + b[i] >= M) {
				continue;
			}
			if (array[x + a[i]][y + b[i]] == 0) {
				array[x + a[i]][y + b[i]] = array[x][y] + 1;
				que.push(pair<int, int>(x + a[i], y + b[i]));
			}
		}
		que.pop();


	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if (array[i][j] == 0) count = 1;
		}
	}
	if (count == 0) {
		cout << --day;
	}
	else {
		cout << -1;
	}
};
int main() {
	tomato();
	return 0;
}