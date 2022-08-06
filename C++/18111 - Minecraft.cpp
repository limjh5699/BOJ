#include<iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, M, B, maxHeight=-1, minTime=1e9;
  int arr[502][502] = {0, };
  cin >> N >> M >> B;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> arr[i][j];
    }
  }

  for (int height = 0; height <= 256; height++) {
    int inventory = 0;
    int remove = 0;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        int currentHeight = arr[i][j] - height;
        if (currentHeight < 0) inventory -= currentHeight;
        else remove += currentHeight; 
      }
    }

    if(remove + B >= inventory) {
      int time = 2 * remove + inventory;
      if(minTime >= time) {
        minTime = time;
        maxHeight = height;
      }
    }
  }
  cout << minTime << " " << maxHeight;
}