#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
char c,d;
int arr[123] = {0};
int arr2[10000000] = { 0 };
int sum = 0;
int res = 0;
int temp = 0;
int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
		arr2[i] = str[i];
	}
	for (int i = 0; i < str.length(); i++) {
		arr[arr2[i]]++;
	}
	for (int i = 97; i < 123; i++) {
		sum = max(sum, arr[i]);
	}
	for (int i = 97; i < 123; i++) {
		if (sum == arr[i]) {
			res++;
			temp = i;
		}
	}
	if (res == 1) {
		c = temp;
		d = toupper(c);
		cout << d;
	}
	else {
		cout << "?";
	}
	
}