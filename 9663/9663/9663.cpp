#include<iostream>
using namespace std;
int N;
int visit[15] = { 0 };
int res = 0;
int promising(int i) {
	for (int j = 0; j < i; j++) {
		if (visit[j] == visit[i] || abs(visit[i] - visit[j]) == (i - j)) {
			return 0;
		}
	}
	return 1;
}
void Queen(int i) {
	if (i == N) {
		res += 1;
	}
	else {
		for (int j = 0; j < N; j++) {
			visit[i] = j;
			if (promising(i)) {
				Queen(i + 1);
			}
		}
	}
}
int main() {
	cin >> N;
	Queen(0);
	cout << res;
	return 0;
}