#include<iostream>
#include<string>
using namespace std;
string str;
int main() {
	int N;
	int res = 0;
	int swi = 0;
	int swi2 = 0;
	cin >> N;
	char c;
	for (int i = 0; i < N; i++) {
		cin >> str;
		res++;
		swi2 = 0;
		for (int j = 0; j < str.size() && swi2 == 0; j++) {
			c = str[j];
			swi = 0;

			for (int k = j + 1; k < str.size() && swi2==0; k++) {
				if (c != str[k]) {
					swi = 1;
				}
				if (swi == 1) {
					if (c == str[k]) {
						res--;
						swi2 = 1;
					}
				}
			}
		}
	}
	cout << res;
}