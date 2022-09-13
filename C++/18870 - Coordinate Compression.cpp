#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  vector<long long> v1, v2;
  map<long long, long long> m;
  
  cin >> N;

  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    v1.push_back(x);
    v2.push_back(x);
  }

  sort(v1.begin(), v1.end());
  v1.erase(unique(v1.begin(), v1.end()), v1.end());

  for (int i = 0; i < v1.size(); i++) {
    m.insert({ v1[i], i });
  }

  for (int i = 0; i < v2.size(); i++) {
    cout << m[v2[i]] << " ";
  }
}