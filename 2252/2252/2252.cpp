#include<iostream>
#include<vector>
#include<queue>
using namespace std;
queue<int> que;
int main() {
	int N, M, a,b;
	int indegree[32001] = {0};
	vector<int> v[32001];
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		indegree[b]++;
		v[a].push_back(b);
	}
	for (int i = 1; i <= N; i++) {
		if (indegree[i] == 0) {
			que.push(i);
		}
	}
	while (!que.empty()) {
		int i = que.front();
		que.pop();
		cout << i << " ";
		for (int j = 0; j < v[i].size(); j++) {
			if (--indegree[v[i][j]] == 0) {
				que.push(v[i][j]);
			}
		}
	}
}