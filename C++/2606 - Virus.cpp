#include<iostream>
#include<vector>
using namespace std;

int N, M, cnt = -1;
bool visited[101];
vector<int> graph[101];

void dfs(int x) {
  visited[x] = true;
  cnt++;

  for(int i = 0; i < graph[x].size(); i++) {
    int y = graph[x][i];
    if(!visited[y]) {
      dfs(y);
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N >> M;
  
  for(int i = 1; i <= N; i++) {
    graph->push_back(i);
  }

  for(int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    
    graph[a].push_back(b);
    graph[b].push_back(a);
  } 

  dfs(1);

  cout << cnt;
}