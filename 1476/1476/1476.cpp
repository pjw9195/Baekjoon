#include<iostream>

using namespace std;

int main() {
	int E, S, M;
	int a[8000];
	int b[8000];
	int c[8000];

	a[1] = 1;
	b[1] = 1;
	c[1] = 1;
	for (int i = 2; i < 7981; i++) {
		a[i] = a[i-1]+1;
		b[i] = b[i-1]+1;
		c[i] = c[i-1]+1;
		if (a[i] == 16) {
			a[i] = 1;
		}
		if (b[i] == 29) {
			b[i] = 1;
		}
		if (c[i] == 20) {
			c[i] = 1;
		}
	}
	cin >> E>> S>> M;
	for (int i = 1; i < 7981; i++) {
		if (a[i] == E && b[i] == S && c[i] == M) {
			cout << i;
			return 0;
		}
	}

}