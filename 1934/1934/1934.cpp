#include<iostream>

using namespace std;


int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	
		return gcd(b, a%b);
	
}

int lcm(int a, int b) {
	return a*b / gcd(a, b);
}

int main() {
	int num;
	int array[1000][1000];
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> array[i][0] >> array[i][1];
	}
	for (int i = 0; i < num; i++) {
		cout << lcm(array[i][0], array[i][1]);
		cout << endl;
	}
	return 0;
}