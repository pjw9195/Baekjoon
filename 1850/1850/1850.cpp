#include<iostream>
#include<math.h>
using namespace std;
long long gcd(long long a, long long b) {
	if (b == 0) { return a; }
	gcd(b, a%b);
}
int main() {
	long long a, b,num,sum;
	cin >> a >> b;
	for (long long i = 0; i < gcd(a,b); i++) {
		cout << 1;
	}
	return 0;
}