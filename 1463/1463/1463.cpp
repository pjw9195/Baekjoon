#include<iostream>

using namespace std;
int res2;
int d[10000] = {0};
int one(int n) {
	if (n == 1) {
		return 0;
	}
	if (d[n] > 0)return d[n];
	d[n] = one(n - 1) + 1;
	if (n % 2 == 0) {
		int temp = one(n / 2) + 1;
		if (d[n] > temp) d[n] = temp;
	}
	if (n % 3 == 0) {
		int temp = one(n / 3) + 1;
		if (d[n] > temp) d[n] = temp;
	}
}
int main() {
	int N;
	cin >> N;
	cout << one(N);
}