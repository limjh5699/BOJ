#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, K, cnt=0;
  vector<int> v;

  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end(), greater<int>());

  for (int i = 0; i < N; i++) {
    if(K >= v[i]) {
      cnt += (K / v[i]);
      K %= v[i];
    }
  }
  
  cout << cnt << "\n";
}