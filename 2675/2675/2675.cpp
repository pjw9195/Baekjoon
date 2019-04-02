#include<iostream>
#include<string>

using namespace std;

int main() {
	int T;
	int R;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string str;
		cin >> R >> str;
		for (int j = 0; j < str.length(); j++) {
			for (int k = 0; k < R; k++) {
				cout << str[j];
			}
		}
		cout << '\n';
	}
	return 0;
}