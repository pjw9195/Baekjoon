#include<iostream>
#include<queue>
using namespace std;
queue <pair<int, int>> que;

int main() {
	int A, B, C;
	cin >> A >> B;
	if (A == B) {
		cout << 0;
		return 0;
	}
	int visit[200010] = { 0 };
	que.push(pair<int, int>(A + 1, 1));
	que.push(pair<int, int>(A - 1, 1));
	que.push(pair<int, int>(2 * A, 1));
	visit[A + 1] = 1;
	visit[A - 1] = 1;
	visit[2 * A] = 1;

	while (!(que.front().first == B)) {
		A = que.front().first;
		C = que.front().second;
		if (A + 1 <= 100000 && visit[A + 1] == 0) {
			que.push(pair<int, int>(A + 1, C + 1));
			visit[A + 1] = C + 1;
		}
		if (A - 1 >= 0 && visit[A - 1] == 0) {
			que.push(pair<int, int>(A - 1, C + 1));
			visit[A - 1] = C + 1;
		}
		if (2 * A <= 100000 && visit[2 * A] == 0) {
			que.push(pair<int, int>(2 * A, C + 1));
			visit[2 * A] = C + 1;
		}
		que.pop();
	}
	cout << que.front().second;
}