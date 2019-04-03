#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	char c;
	cin >> str;
	int arr[101];
	for (int i = 0; i < str.length(); i++) {
		arr[i] = str[i];
	}
	cout << str[0];
	for (int i = 0; i < str.length(); i++) {
		if (arr[i] == 45) {
			c = arr[i + 1];
				cout << c;
		}
	}
	return 0;
}