#include<iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  int DP[11] = {0, };

  cin >> n;

  DP[1] = 1;
  DP[2] = 2;
  DP[3] = 4;

  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;

    for(int i = 4; i <= x; i++) {
      DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3]; 
    }

    cout << DP[x] << "\n";
  }
}