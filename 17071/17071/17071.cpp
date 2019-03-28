#include<iostream>
#include<queue>

using namespace std;
int visit[500001] = { 0 };
int visit2[500001] = { 0 };

queue <pair <int, int>> que;
int main() {
	int N, K, x, y;
	int num = 0;
	int sum = 1;
	cin >> N >> K;
	que.push(pair<int, int>(N, 0));
	while (1) {
		x = que.front().first;
		y = que.front().second;

		if (K == x) {
			cout << y;
			return 0;
		}
		if (visit[K] != 0) {
			if (visit[K] % 2 == 1 && num % 2 == 1) {
				cout << num;
				return 0;
			}
		}
		if (visit2[K] != 0) {
			if (visit2[K] % 2 == 0 && num % 2 == 0) {
				cout << num;
				return 0;
			}
		}

		if (num % 2 == 1) {
			if (x - 1 >= 0 && visit2[x - 1] == 0) {
				que.push(pair<int, int>(x - 1, y + 1));
				visit2[x - 1] = y + 1;
			}
			if (x + 1 <= 500000 && visit2[x + 1] == 0) {
				que.push(pair<int, int>(x + 1, y + 1));
				visit2[x + 1] = y + 1;
			}
			if (2 * x <= 500000 && visit2[2 * x] == 0) {
				que.push(pair<int, int>(2 * x, y + 1));
				visit2[x * 2] = y + 1;
			}
		}
		if (num % 2 == 0) {
			if (x - 1 >= 0 && visit[x - 1] == 0) {
				que.push(pair<int, int>(x - 1, y + 1));
				visit[x - 1] = y + 1;
			}
			if (x + 1 <= 500000 && visit[x + 1] == 0) {
				que.push(pair<int, int>(x + 1, y + 1));
				visit[x + 1] = y + 1;
			}
			if (2 * x <= 500000 && visit[2 * x] == 0) {
				que.push(pair<int, int>(2 * x, y + 1));
				visit[x * 2] = y + 1;
			}
		}

		que.pop();
		if (!que.empty()) {
			if (y != que.front().second) {
				K = K + sum;
				if (K > 500000) {
					cout << "-1";
					return 0;
				}
				sum++;
				num++;
			}
		}
		else {
			K = K + sum;
			sum++;
			num++;
		}
	}

}