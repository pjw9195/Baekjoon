#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int D[1000] = {0};
	int arr[1000] = { 0 };
	int min, maxx, N;
	int x = 0;
	maxx = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) {
		min = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				min = max(D[j],min);
			}
		}
		D[i] = min + 1;
		maxx = max(D[i], maxx);
	}
	cout << maxx;
}