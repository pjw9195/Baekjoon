#include<iostream>
#include<algorithm>
using namespace std;
int arr[10] = { 0 };
int main() {
	int N;
	cin >> N;
	int factorial = 1;
	for (int i = 1; i < N + 1; i++) {
		arr[i] = i;
		factorial = factorial*i;
	}
	for (int i = 0; i < factorial; i++) {
		for (int i = 1; i < N+1; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		next_permutation(arr+1, arr + N+1);
	}
	
}