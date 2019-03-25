#include<iostream>

using namespace std;

int main() {
	int N;
	int num = 1;
	int res = 0;
	cin >> N;
	if (N == 1) {
		cout << "1";
		return 0;
	}
	for (int i = 1; i < N; i++) {
		num = 6 * i + num;
		if (num >= N) {
			cout << i + 1;
			return 0;
		}
	}
}