#include<iostream>

using namespace std;

int main() {
	int N;
	int three = 3;
	int five = 5;
	int result = 10000;
	cin >> N;
	if (N == 4 || N == 7) {
		cout << -1;
		return 0;
	}
	for (int i = 0; i <= 1000; i++) {
		if ((N - five*i) % 3 == 0) {
			if (N - five*i <0) {
				break;
			}
			if (result >(N - five*i) / 3 + i) {
				result = (N - five*i) / 3 + i;
			}
		}
	}
	cout << result;
	return 0;
}