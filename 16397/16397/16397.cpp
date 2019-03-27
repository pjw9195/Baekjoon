#include<iostream>
#include<queue>
#include<math.h>
using namespace std;
queue <pair <int, int>> que;
int visit[100000];
int main() {
	int N, G, T;
	int x, y ,x2;
	cin >> N >> G >> T;
	que.push(pair<int, int>(N, 0));
	if (N == T) {
		cout << "0";
		return 0;
	}
	if (que.front().first >= 50000 && T < N) { 
		cout << "ANG"; 
		return 0;
	}
	while (!que.empty()) {
		x = que.front().first;
		y = que.front().second;
		if (x == T) {
			cout << y;
			return 0;
		}
		for (int i = 5; i >= 0; i--) {
			if (x * 2 >= pow(10, i)) {
				x2 = x * 2 - pow(10, i);
				break;
			}
		}
		if (x + 1 <= 99999 && visit[x + 1] == 0) {
			que.push(pair<int, int>(x + 1, y + 1));
			visit[x + 1] = 1;
		}
		if (x != 0 && 2 * x <= 99999 && visit[x2] == 0) {
			que.push(pair<int, int>(x2, y + 1));
			visit[x2] = 1;
		}
		que.pop();
		if (que.front().second > G) {
			cout << "ANG";
			return 0;
		}
	}
	cout << "ANG";
}