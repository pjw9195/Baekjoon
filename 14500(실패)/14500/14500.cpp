#include<iostream>
using namespace std;

int main() {
	int x[4] = {0, 0, -1, 1};
	int y[4] = {1, -1, 0, 0};
	int arr[501][501] = { 0 };
	int a, b;
	int stage = 0;
	int sum;
	int temp;
	int temp2;
	cin >> a >> b;
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			sum = arr[i][j];
			for (int k = 0; k < 4; k++) {
				temp = arr[i + x[k]][j +y[k]];
				if(temp > arr[])
			}
		}
	}


}