#include<iostream>
#include<string>
using namespace std;
string str;
int visit[130] = { 0 };
int main() {
	std::fill_n(visit, 130, -1);
	cin >> str;
	int arr[101] = { 0 };
	for (int i = 0; i < str.length(); i++) {
		arr[i] = str[i];
	}
	for (int i = 0; i < str.length(); i++) {
		if (visit[arr[i]] == -1) {
			visit[arr[i]] = i;
		}
	}
	for (int i = 97; i < 123; i++) {
		cout << visit[i] << " ";
	}
}