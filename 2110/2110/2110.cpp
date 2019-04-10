#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <int> v1;
int N;
int main() {

	int C;
	cin >> N >> C;
	int x, mid, d;
	int temp = 0;
	int res = 0;
	int left,right;
	int ans;
	for (int i = 0; i < N; i++) {
		cin >> x;
		v1.push_back(x);
	}
	sort(v1.begin(), v1.end());
	temp = v1[0];
	left = 1;
	right = v1[N - 1] - v1[0];
	mid = left + right / 2;

	while (left <= right) {
		mid = (left + right) / 2;
		int start = v1[0];
		res = 1;
		for (int i = 1; i < N; i++) {
			d = v1[i] - start;
			if (mid <= d) {
				start = v1[i];
				res++;
			}
		}
		if (res >= C) {
			left = mid + 1;
			ans = mid;
		}
		else {
			right = mid - 1;
		}
	}
	cout << ans;

}