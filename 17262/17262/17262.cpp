#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N;
	int x, y;
	int maxx = 0;
	int	miny = 999999;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		maxx = max(maxx, x);
		miny = min(miny, y);
	}
	if (miny >= maxx) {
		cout << 0;
	}
	else {
		cout << maxx - miny;
	}

}