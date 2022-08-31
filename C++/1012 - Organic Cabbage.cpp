#include<iostream>
#include<string.h>
using namespace std;

#define MAX_SIZE 51

int T, M, N, K, count = 0;
int arr[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE][MAX_SIZE];
int moveX[] = { -1, 0, 0, 1 };
int moveY[] = { 0, -1, 1, 0 };

void dfs(int x, int y) {
  visited[x][y] = 1;

  for(int i = 0; i < 4; i++) {
    int ax = x + moveX[i];
    int ay = y + moveY[i];

    if(ax < 0 || ax > M || ay < 0 || ay > N) {
      continue;
    }

    if(arr[ax][ay] == 0 || visited[ax][ay] == 1) {
      continue;
    }

    dfs(ax, ay);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  cin >> T;

  while(T--) {
    cin >> M >> N >> K;

    for(int i = 0; i < K; i++) {
      int x, y;
      cin >> x >> y;
      arr[x][y] = 1;
    }

    for(int i = 0; i < M; i++) {
      for(int j = 0; j < N; j++) {
        if(arr[i][j] == 1 && visited[i][j] != 1) {
          count++;
          dfs(i, j);
        }
      }
    }

    cout << count << "\n";

    memset(arr, 0, sizeof(arr));
    memset(visited, 0, sizeof(visited));    
    count = 0;
  }
}