#include<iostream>

using namespace std;

int main() {
	long long x1, y1, x2, y2, x3, y3, x4, y4,temp1,temp2;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	temp1 = (x2 - x1)*(y3 - y2) - (y2 - y1)*(x3 - x2);
	temp2 = (x2 - x1)*(y4 - y2) - (y2 - y1)*(x4 - x2);
	if (temp1*temp2 < 0) {
		cout << "1";
	}
	else { cout << "0"; }
	return 0;
}