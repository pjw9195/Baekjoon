#include<iostream>
#include<algorithm>

using namespace std;
int P[10002];
int D[1002];

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++){
		cin >> P[i];
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			D[i] = max(D[i], D[i - j] + P[j]);
		}
	}
	cout << D[N]<<'\n';
	return 0;

}