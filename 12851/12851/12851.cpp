#include<iostream>
#include<queue>
using namespace std;
queue <pair<int, int>> que;

int main() {
	int A, B, C;
	int res = 0;
	int temp = 0;
	int a = 0;
	cin >> A >> B;
	if (A == B ) {
		cout << 0 << '\n' << 1;
		return 0;
	}
	if (B == 0) {
		cout << A << '\n' << 1;
		return 0;
	}
	int visit[200010] = { 0 };
	que.push(pair<int, int>(A + 1, 1));
	que.push(pair<int, int>(A - 1, 1));
	que.push(pair<int, int>(2 * A, 1));


	while (!(que.empty())) {

		A = que.front().first;
		C = que.front().second;
		if (que.front().first == B) {
			res++;
			temp = que.front().second;
			a = 1;
		}
		visit[A] = C;
	
		if (A + 1 <= 100000 && visit[A+1] ==0) {
			que.push(pair<int, int>(A + 1, C + 1));
		}
		if (A - 1 >= 0 && visit[A - 1] == 0) {
			que.push(pair<int, int>(A - 1, C + 1));
		}
		if (2 * A <= 100000 && visit[2 * A] == 0) {
			que.push(pair<int, int>(2 * A, C + 1));
		}
		que.pop();
		
		if (a == 1) {
			if (temp != que.front().second) {
				break;
			}
		}
	}
	cout << que.front().second-1 << '\n' << res;
}