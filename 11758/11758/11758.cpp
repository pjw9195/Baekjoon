#include<iostream>

using namespace std;

int main() {
	int temp;
	int a1, a2, b1, b2, c1, c2;
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	temp = (b1 - a1) * (c2 - a2) - (b2 - a2)*(c1 - a1);
	if (temp == 0) {
		cout << 0;
	}
	else if (temp > 0) {
		cout << 1;
	}
	else {
		cout << -1;
	}
}