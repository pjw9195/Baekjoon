#include<iostream>

using namespace std;

int main() {
	int sum = 0;
	int x, y;
	cin >> x >> y;
	for (int i = 1; i < x; i++) {
		if (i == 2) {
			sum += 28;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			sum += 30;
		}
		else {
			sum += 31;
		}
	}
	sum += y;
	if (sum % 7 == 1) {
		cout << "MON";
	}
	else if (sum % 7 == 2) {
		cout << "TUE";
	}
	else if (sum % 7 == 3) {
		cout << "WED";
	}
	else if (sum % 7 == 4) {
		cout << "THU";
	}
	else if (sum % 7 == 5) {
		cout << "FRI";
	}
	else if (sum % 7 == 6) {
		cout << "SAT";
	}
	else if (sum % 7 == 0) {
		cout << "SUN";
	}
}