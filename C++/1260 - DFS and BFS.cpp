#include<iostream>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

int N, M, V, y;
int visited[10001];
vector<int> v[10001];
queue<int> q;

void DFS(int x) {
  visited[x] = true;
  cout << x << " ";

  for(int i = 0; i < v[x].size(); i++) {
    y = 9999;

    for(int j = 0; j < v[x].size(); j++) {
      if(visited[v[x][j]] == false && y > v[x][j]) y = v[x][j];
    }
    if(visited[y] == false && y != 9999) DFS(y);
  }
}

void BFS(int start) {
  q.push(start);
  visited[start] = true;
  
  while(q.empty() == false) {
    int x = q.front();
    q.pop();
    cout << x << " ";

    for(int i = 0; i < v[x].size(); i++) {
      y = 9999;

      for(int j = 0; j < v[x].size(); j++) {
        if(visited[v[x][j]] == false && y > v[x][j]) y = v[x][j];
      }

      if(visited[y] == false && y != 9999) {
        q.push(y);
        visited[y] = true;
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N >> M >> V;
  
  for(int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;

    v[a].push_back(b);
    v[b].push_back(a);
  }

  DFS(V);

  cout << "\n";
  memset(visited, 0, sizeof(visited));

  BFS(V);
}