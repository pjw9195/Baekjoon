#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {

	queue <pair<int, int>> que;

	queue <pair<int, int>> que2;
	int cont[8] = { -1,-1,1,1,0,0,1,-1 };
	int cont2[8] = { -1,1,-1,1,1,-1,0,0 };
	int array[51][51] = { 0 };
	int a, b;
	int x, y;
	int temp;
	int count = 0;
	cin >> a >> b;
	while (!(a == 0 && b == 0)) {
		count = 0;
		array[51][51] = { 0 };
		for (int i = 0; i < b; i++) {
			for (int j = 0; j < a; j++) {
				cin >> temp;
				array[i][j] = temp;
				if (temp == 1) {
					que.push(pair<int, int>(i, j));
				}
			}
		}
		while (!que.empty()) {
			x = que.front().first;
			y = que.front().second;
			if (array[x][y] == 0) {
				que.pop();
				continue;
			}
			count++;
			que2.push(pair<int, int>(x, y));

			while (!que2.empty()) {
				x = que2.front().first;
				y = que2.front().second;
				array[x][y] = 0;
				for (int i = 0; i < 8; i++) {
					if (cont[i] + x < 0 || cont2[i] + y < 0 || cont[i] + x > b || cont2[i] + y > a) {
						continue;
					}
					if (array[x + cont[i]][y + cont2[i]] != 0) {
						que2.push(pair<int, int>(x + cont[i], y + cont2[i]));

						array[x + cont[i]][y + cont2[i]] = 0;
					}
				}
				que2.pop();
			}
			que.pop();
		}
		cout << count++;
		cin >> a >> b;
	}
	return 0;

}