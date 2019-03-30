#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	int arr[302];
	int D[302];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	D[0] = arr[0];
	D[1] = arr[0]+arr[1];
	D[2] = max(arr[0] + arr[2],arr[1] + arr[2]);
	for (int i = 3; i < N; i++) {
		D[i] = max(D[i - 3] + arr[i - 1] + arr[i], D[i - 2] + arr[i]);
	}
	cout << D[N-1];

}