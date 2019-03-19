#include<iostream>

using namespace std;

int arr[20];
int N, result;
int inc;
void DFS(int i, int sum ) {
	if (sum + arr[i] == result) {
		inc++;
	}
	if (i == N - 1) { return; }
	DFS(i + 1, sum);
	DFS(i + 1, sum + arr[i]);
}

int main() {
	cin >> N >> result;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	DFS(0, 0);
	cout << inc;
}