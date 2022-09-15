#include<iostream>
using namespace std;

int N, white_cnt=0, blue_cnt=0;
int arr[129][129] = {0, };

void solve(int x, int y, int n) {
  int temp = 0;
  for (int i = x; i < x + n; i++) {
    for (int j = y; j < y + n; j++) {
      if (arr[i][j]) temp++;
    }
  }

  if (temp == n * n) blue_cnt++;
  else if (temp == 0) white_cnt++;
  else {
    solve(x, y, n / 2); // 왼쪽 위
    solve(x, y + n / 2, n / 2); // 오른쪽 위
    solve(x + n / 2, y, n / 2); // 왼쪽 아래
    solve(x + n / 2, y + n / 2, n / 2); // 오른쪽 아래
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> arr[i][j];
    }
  }

  solve(0, 0, N);

  cout << white_cnt << "\n" << blue_cnt;
}