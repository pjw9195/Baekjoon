#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
deque<pair <int, int>> deq;
int main() {
	int res = 1;
	int N;
	int temp = 0;
	cin >> N;
	int a, b;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		deq.push_back(pair<int, int>(b,a));
	}
	sort(deq.begin(), deq.end());
	temp = deq.front().first;
	deq.pop_front();
	while (!deq.empty()) {	
		if (temp <= deq.front().second) {
			temp = deq.front().first;
			res++;
		}
		deq.pop_front();
	}
	cout << res;
	return 0;

}