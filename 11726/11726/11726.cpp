#include<iostream>

using namespace std;
int visit[1001];
int tile(int n) {
	
	if (n ==2) {
		return 2;
	}
	if (n == 1 || n==0) {
		return 1;
	}
	
	else {
		if (visit[n] != 0) {
			return visit[n];
		}
		visit[n] = (tile(n - 1) + tile(n - 2))%10007;
		return visit[n];
	}
	 
}
int main() {
	int N;
	cin >> N;
	cout << tile(N);
	return 0;
}