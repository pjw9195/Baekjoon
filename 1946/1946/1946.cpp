#include<deque>
#include<iostream>
#include<algorithm>

using namespace std;

deque <pair<int, int>> v1;
int main() {
	int T, N;
	cin >> T;
	int a, b, count;
	int temp;
	int size;
	for (int i = 0; i < T; i++) {
		count = 1;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> a >> b;
			v1.push_back(pair<int, int>(a, b));
		}
		sort(v1.begin(), v1.end());
		temp = v1.front().second;
		v1.pop_front();
		size = v1.size();
		for (int i = 0; i < size; i++) {
			if (v1.front().second < temp) {
				count++;
				temp = v1.front().second;
			}
			v1.pop_front();
		}
		cout << count << '\n';
	}

}