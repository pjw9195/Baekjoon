#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int array[9];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> array[i];
		sum = sum + array[i];
	}
	sort(array, array + 9);
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum == array[i] + array[j] + 100) {
				array[i] = 0;
				array[j] = 0;
				goto stop;
			}
		}
	}
stop:
	for (int i = 0; i < 9; i++) {
		if (array[i] != 0) {
			cout << array[i] << '\n';
		}
	}
	return 0;
}