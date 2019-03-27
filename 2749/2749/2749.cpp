#include<iostream>

using namespace std;
long long visit[10000000];
long long pivo(long long n) {
	if (n < 2) {
		return n;
	}
	if (visit[n] != 0) {
		return visit[n];
	}
	visit[n] = (pivo(n - 1) + pivo(n - 2))%1000000;
	return visit[n];

}

int main() {
	long long N;
	cin >> N;
	cout << pivo(N % 1500000);
	return 0;
}