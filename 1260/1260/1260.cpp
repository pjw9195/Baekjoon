#include<iostream>
#include<queue>
#include<algorithm>
#include<iterator>

using namespace std;
deque<pair <int,int>> deq;
queue<int> que;
int N, M, V;
int x, y;
int temp;
int visit[1002] = {0};
int visit2[1002] = { 0 };
int res = 0;
int res2 = 0;
int arr[1002][1002];
void DFS(int a) {
	if (res == N) return;
	visit[a] = 1;
	for (int i = 0; i < deq.size(); i++) {
		if (res == N) return;
		int x =deq[i].first;
		int y =deq[i].second;
		if (a == deq[i].first && visit[y] == 0) {
			cout << deq[i].second << " ";
			res++;
			if (res == N) return;
			DFS(y);
		}
		else if (a == deq[i].second && visit[x] == 0) {
			cout << deq[i].first << " ";
			res++;
			if (res == N) return;
			DFS(x);
		}
	}
	return;
}
int main() {
	
	cin >> N >> M >>V;
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	for (int i = 1; i < N; i++) {
		for (int j = i+1; j < N+1; j++) {
			if (arr[i][j] == 1) {
				deq.push_back(pair<int,int>(i, j));
			}
		}
	}
	
	

	cout << V << " ";
	DFS(V);
	cout << '\n';
	
	que.push(V);
	visit2[V] = 1;
	cout << V << " ";
	while (!que.empty()) {
		temp = que.front();
		for (int i = 0; i < deq.size(); i++) {
			if (deq[i].first == temp && visit2[deq[i].second] == 0) {
				cout << deq[i].second << " ";
				res2++;
				if (res2 == N) return 0;
				que.push(deq[i].second);
				visit2[deq[i].second] = 1;
			}
			if (deq[i].second == temp && visit2[deq[i].first] == 0) {
				cout << deq[i].first << " ";
				res2++;
				if (res2 == N) return 0;
				que.push(deq[i].first);
				visit2[deq[i].first] = 1;
				
			}
		}
		que.pop();
	}
	

}


