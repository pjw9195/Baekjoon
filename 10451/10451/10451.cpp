#include<iostream>
using namespace std;

int arr[1000] = { 0 };

void DFS(int a) {
	int sum;
	sum = arr[a];
	if (arr[a] != 0) {
		arr[a] = 0;
		DFS(sum);
	}
}
int main() {
	int T, N;
	int res = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		for (int j = 1; j < N+1; j++) {
			cin >> arr[j];
		}
		for (int j = 1; j < N + 1; j++) {
			if (arr[j] != 0){
				res++;
				DFS(j);
			}
			else {
				continue;
			}
		}
		cout << res << '\n';
		res = 0;
		arr[1000] = { 0 };
	}
	return 0;
}