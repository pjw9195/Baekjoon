#include<iostream>

using namespace std;


int prime(int n) { //return 1 = 소수가 아님. return 2 = 소수임
	if (n < 2) {
		return 1;
	}
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) {
			return 1;
		}
	}
	return 2;

}


int main() {
	int count = 0;
	int num = 0;
	int temp;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> temp;
		if (prime(temp) == 2) {
			count++;
		}
	}
	cout << count;
	return 0;
}