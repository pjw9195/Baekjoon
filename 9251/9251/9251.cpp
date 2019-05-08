#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string s1,s2;
int arr[1001][1001] = {0};
int main() {
	int x, y;
	cin >> s1 >> s2;
	x = s1.length();
	y = s2.length();
	for (int i = 1; i < x + 1; i++) {
		for (int j = 1; j < y + 1; j++) {
			arr[i][j] = max(arr[i][j - 1], arr[i - 1][j]);
			if (s1[i - 1] == s2[j - 1]) {
				arr[i][j] = arr[i - 1][j - 1] + 1;
			}
		}
	}
	cout << arr[x][y];
}