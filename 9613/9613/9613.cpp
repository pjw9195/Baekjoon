#include<iostream>

using namespace std;
int gcd(int a, int b) {
	
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a%b);
	}
}

int main() {
	int num;
	int num2;
	int a[101];
	long long sum;
	cin >> num;

	for (int i = 0; i < num; i++) {
		sum = 0;
		num2 = 0;
		cin >> num2;
		for (int j = 0; j < num2; j++) {
			cin >> a[j];
		}
		for (int x = 0; x < num2-1; x++) {
			for (int y = x+1; y < num2; y++) {
				sum = sum + gcd(a[x], a[y]);
			}
		}
		cout << sum << endl;

	}



	return 0;
}