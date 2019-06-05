#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
deque <pair<int, int>> deq;
deque <pair<int, int>> deq2;
int main() {
	int N;
	int temp;
	int x, y;
	int first = 0;
	int second = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		deq.push_back(pair<int, int>(y, x));
		deq2.push_back(pair<int, int>(x, y));
	}
	sort(deq.begin(), deq.end());
	sort(deq2.begin(), deq2.end());
	
	temp = deq.size();
	if (deq2[temp - 1].first > deq.front().first) {

		cout << deq2[temp - 1].first - deq.front().first;
	}
	else {
		cout << 0;
	}

}