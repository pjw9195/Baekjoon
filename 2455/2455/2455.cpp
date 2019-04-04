#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int ma = 0;
	int sum = 0;
	int arr[4][2];
	for (int i = 0; i < 4; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	sum = arr[0][1];
	ma = sum;
	for (int i = 1; i < 4; i++) {
		ma = max(ma, sum + arr[i][1] - arr[i][0]);
		sum = sum + arr[i][1] - arr[i][0];
	}
	cout << ma;
}