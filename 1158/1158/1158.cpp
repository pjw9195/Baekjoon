#include<iostream>
#include<vector>
using namespace std;
int main() {
	int v1[5002] = {0};
	int N, K;
	int temp;
	int temp2;
	cin >> N >> K;
	for (int i = 1; i < N + 1; i++) {
		v1[i] = i;
	}
	temp = 0;
	temp2 = N;
	cout << "<";
	while (1) {
		for (int i = 1; i < N+1; i++) {
			if (v1[i] != 0) {
				temp++;
				if (temp % K == 0) {
					temp2--;
					if (temp2 == 0) {
						cout << v1[i] << ">";
					}
					else {
						cout << v1[i] << ", ";
						v1[i] = 0;
					}
					if (temp2 == 0) return 0;
				}
			}
		}
	}
}