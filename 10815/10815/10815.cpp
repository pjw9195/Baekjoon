#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector <int> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M, x, key, mid;
	cin >> N; 
	for (int i = 0; i < N; i++) {
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> x;
		int left = 0;
		int right = N - 1;

		while (left <= right) {
			mid = (left + right) / 2;
			if (x == v[mid]) {
				cout << "1 ";
				break;
			}
			else if (x > v[mid]) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
		}
		if (x != v[mid]) {
			cout << "0 ";
		}

	}
}