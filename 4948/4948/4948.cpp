#include<iostream>

using namespace std;

int arr[250000] = {0};
int main() {
	arr[0] = 1;
	int n;
	int count = 0;
	while (1) {
		count = 0;
		cin >> n;
		if (n == 0) {
			return 0;
		}
		for (int i = 2; i < 250000; i++) {
			if (arr[i] == 1) {
				continue;
			}
			for (int j = 2; i*j < 250000; j++) {
				arr[i*j] = 1;
			}
		}
		for (int i = n+1; i <= 2*n; i++) {
			if (arr[i] == 0) {
				count++;
			}
		}

		cout << count << '\n';

	}
	

}