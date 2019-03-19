#include<iostream>
#include<queue>

using namespace std;
queue<pair<int, int>> que;
int res;
int main() {
	int N, M;
	int a[10000] = {0};
	int b[10000] = {0};
	int x, y;
	cin >> N >> M;
	int resarr[101] = { 0 };
	for (int i = 0; i < M; i++) {
		cin >> a[i] >> b[i];
		if (a[i] == 1 || b[i] == 1) {
			que.push(pair<int, int>(a[i], b[i]));
			if (a[i] == 1) {
				resarr[b[i]] = 1;
			}
			if (b[i] == 1) {
				resarr[a[i]] = 1;
			}
			a[i] = 0;
			b[i] = 0;
		}


	}

	while (!que.empty()) {
		for (int i = 0; i < M; i++) {
			if (que.front().second == a[i]|| que.front().first == a[i]) {
				que.push(pair<int, int>(a[i], b[i]));
				resarr[b[i]] = 1;
				a[i] = 0;
				b[i] = 0;
			}
			if (que.front().first == b[i] || que.front().second == b[i]) {
				que.push(pair<int, int>(a[i], b[i]));
				resarr[a[i]] = 1;
				a[i] = 0;
				b[i] = 0;
			}
		}
		que.pop();
	}
		for (int i = 0; i < 101; i++) {
			if (resarr[i] == 1) {
				res++;
			}
		}
		cout << res;
		return 0;
	}
