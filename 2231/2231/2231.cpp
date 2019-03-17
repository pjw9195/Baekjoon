#include<iostream>

using namespace std;

int main() {
	int N;
	int answer;
	int real = 0;
	int temp;
	int div = 10;
	int divsum = 0;
	cin >> N;
	real = N;
	for (int i = 1; i < N / 2; i++) {
		temp = N - i;
		answer = temp;
		while (temp > div) {
			divsum = divsum + temp%div;
			temp = temp / div;
		}
		divsum = divsum + temp;
		if (N == answer + divsum) {
			if (real > answer) {
				real = answer;
			}
		}
		divsum = 0;
	}
	if (real == N) {
		cout << '0';
	}
	else {

		cout << real;
	}
	return 0;
}