#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;
	string t;
	string s2;
	string t2;
	int count = 0;
	cin >> s;
	cin >> t;
	if (s.length() < t.length()) {
		t2 = t + t;
		for (int i = 0; i < t2.length(); i++) {
			if (s[count] != t2[i]) {
				cout << 0;

				return 0;
			}
			if (count == s.length() -1) {
				count = 0;
				continue;
			}

			count++;
		}
	}
	else {
		s2 = s + s;
		for (int i = 0; i < s2.length(); i++) {
			if (t[count] != s2[i]) {
				cout << 0;

				return 0;
			}
			if (count == t.length() - 1) {
				count = 0;
				continue;
			}

			count++;
		}
	}
	cout << 1;
	return 0;
	
}
