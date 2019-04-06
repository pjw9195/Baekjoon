#include<iostream>
#include<string>
#include<algorithm>
int n;
using namespace std;
int visit[10] = {0};
char inequal[10];
string str = "";
string min_str = "9999999999";
string max_str = "-1";

void DFS(int a, int res) {
	if (res == n + 1) {
		min_str = min(min_str, str);
		max_str = max(max_str, str);
		return;
	}
	if (inequal[res - 1] == '>') {
		for (int i = 0; i < a; i++) {
			if (visit[i] == 0) {
				visit[i] = 1;
				str += (char)(i + '0');
				DFS(i, res + 1);
				visit[i] = 0;
				str.erase(res, 1);
			}
		}

	
	}
	else if (inequal[res - 1] == '<') {
		for (int i = a +1 ; i <= 9; i++) {
			if (visit[i] == 0) {
				visit[i] = 1;
				str += (char)(i + '0');
				DFS(i, res + 1);
				visit[i] = 0;
				str.erase(res, 1);
			}
		}

	}
	return;
}
int main() {
	cin >> n;
	for (int i = 0; i <n; i++) {
		cin >> inequal[i];
	}
	for (int i = 0; i <= 9; i++) {
		visit[i] = 1;
		str += (char)(i + '0');
		DFS(i, 1);
		visit[i] = 0;
		str.erase(0, 1);
	}
	cout << max_str << '\n' << min_str;
	return 0;
}