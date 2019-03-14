#include<iostream>

using namespace std;

int main() {
	int check[1000005] = { 0 };
	int count = 0;
	int a, b;
	cin >> a >> b;
	for (long long i = 2; i <= b; i++) {
		if (check[i] == 0) {
			if (a <= i) {
				cout << i << '\n';
			}
			for (long long j = i*i; j <= b; j = j + i) {
				check[j] = 1;
			}
		}
	}
	return 0;
}