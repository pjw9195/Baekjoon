#include<iostream>
#include<string>
#include<set>

using namespace std;
string temp;
string s;
set <string> se;
void DFS(int left, int right, string str) {
	if (left == 0 && right == s.size() - 1) {
		se.insert(str);
		return;
	}
	if (right != s.size() - 1) { DFS(left, right+1, str + str + s[right+1]); }
	if (left != 0) { DFS(left - 1, right, str + s[left-1] + str); }
}
int main() {
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		temp = s[i];
		DFS(i, i, temp);
	}
	cout << se.size();
	return 0;
}