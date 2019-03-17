#include<iostream>
#include<queue>
#include<cstdio>

using namespace std;

queue< pair<int, int> > que;
int a[4] = { 1,0,-1,0 };
int b[4] = { 0,1,0,-1 };

void miro() {
	int array[100][100];
	int i, j;
	int M, N;
	int day = 0;
	cin >> M >> N;


	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			scanf("%1d", &array[i][j]);
		}
	}
	que.push(pair<int, int>(0,0));
	int x = que.front().first;
	int y = que.front().second;
	while (!(x==M-1 && y==N-1)) {

		x = que.front().first;
		y = que.front().second;
		day = array[x][y];
		if (array[x][y] == 0) {
			que.pop();
			
		}
		for (int i = 0; i < 4; i++)
		{
			if (x + a[i] < 0 || y + b[i] < 0 || x + a[i] >= M || y + b[i] >= N) {
				continue;
			}
			if (array[x + a[i]][y + b[i]] == 1) {
				array[x + a[i]][y + b[i]] = array[x][y] + 1;
				que.push(pair<int, int>(x + a[i], y + b[i]));
			}
		}
		array[x][y] = 0;
		que.pop();
	}
	cout << day;
};
int main() {
	miro();
	return 0;
}