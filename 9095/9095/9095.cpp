#include<iostream>
using namespace std;
int visit[13];
int go(int N) {
	if (N == 1) return 1;
	if (N == 2) return 2;
	if (N == 3) return 4;
	
	if (visit[N] != 0) {
		return visit[N];
	}
	visit[N] = go(N - 1) + go(N - 2) + go(N - 3);
	return visit[N];
}

int main() {
	int T;
	int N;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		cout << go(N)<<'\n';
		visit[13] = { 0 };
	}
	return 0;
}