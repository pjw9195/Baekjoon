#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<pair<long, long>> v1;
const long long INF = 0x3f3f3f3f;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	long long s, e;
	for (int i = 0; i < N; i++) {
		cin >> s >> e;
		v1.emplace_back(s, e);
	}
	sort(v1.begin(), v1.end());
	long long ans = 0;
	s = -INF;
	e = -INF;
	for (int i = 0; i < v1.size(); i++) {

		long long x = v1[i].first , y = v1[i].second;
		if (s <= x && y <= e)continue;
		ans = ans + y-x;
		if (x < e) {
			ans = ans - (e - x);
		}
		s = x;
		e = y;

	}
	cout << ans;
}