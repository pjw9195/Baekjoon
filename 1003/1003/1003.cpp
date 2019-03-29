#include<iostream>

using namespace std;

int N = 0;
int res0 = 0;
int res1 = 0;
int visit[41] = { 0 };
int fibo(int a) {
	if (a == 0) {
		return 1;
	}
	else if (a == 1) {
		return 1;
	}
	else {
		if (visit[a] != 0) {
			return visit[a];
		}
		if (visit[a] == 0) {
			visit[a] = fibo(a - 1) + fibo(a - 2);
			return visit[a];
		}
	}

}

int main() {
	cin >> N;
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		if (temp == 0) {
			cout << 1 << ' ' << 0 << '\n';
		}
		else if (temp == 1) {
			cout << 0 << ' ' << 1 << '\n';
		}
		else {
			cout << fibo(temp-2) << ' ' << fibo(temp-1) << '\n';
		}
	}

}