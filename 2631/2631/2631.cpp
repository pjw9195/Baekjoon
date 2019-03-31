#include<iostream>

using namespace std;
int D[201];
int arr[201];
int inc = 0;
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	D[0] = arr[0];


	for (int i = 1; i < N; i++) {
		for (int j = inc; j >= 0; j--) {
			if(j == 0 && D[0] > arr[i]) {
				D[0] = arr[i];
				break;
			}
			if (arr[i] < D[j]) {
				continue;
			}
			else if (arr[i] > D[j]) {
				D[j + 1] = arr[i];
				if (j == inc) inc++;
				break;
			}
			
		}
	}
	cout << N - inc -1;
}