#include<iostream>
#include<vector>
using namespace std;

int N, M, u, v, count = 0;
bool visited[1001] = {false, };
vector<int> vec[1001 * 1000 / 2];

void DFS(int x) {
  visited[x] = true;

  for(int i = 0; i < vec[x].size(); i++) {
    int y = vec[x][i];

    if(visited[y] == false) {
      DFS(y);
    }
  }
}

int main() {
  cin >> N >> M;

  for(int i = 0; i < M; i++) {
    cin >> u >> v;

    vec[u].push_back(v);
    vec[v].push_back(u);
  }

  for(int i = 1; i <= N; i++) {
    if(visited[i] == false) {
      count++;
      DFS(i);
    }
  }

  cout << count;
}