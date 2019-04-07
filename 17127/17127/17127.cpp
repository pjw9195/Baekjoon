#include<iostream>
#include<algorithm>
using namespace std;
int arr[11];

int main() {
	int N;
	int sum = 0;
	int total = 0;
	int temp = 0;
	int maxx = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	if (N == 4) {
		cout << arr[0] + arr[1] + arr[2] + arr[3];
		return 0;
	}
	for (int i = 0; i < 4; i++) {
		sum = 1;
		for (int j = 0; j < N - 3; j++) {
			sum = arr[i + j] * sum;
		}
		if (sum > maxx) {
			temp = i;
			maxx = sum;
		}
	}
	for (int i = 0; i < N; i++) {
		if (temp > i || temp + N - 3 <= i) {
			total = total + arr[i];
		}
	}
	total = total + maxx;
	cout << total;

}