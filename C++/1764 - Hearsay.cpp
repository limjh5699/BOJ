#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, M;
  map<string, int> map;
  vector<string> v;
  
  cin >> N >> M;

  for (int i = 0; i < N + M; i++) {
    string str;
    cin >> str;
    ++map[str];
    if (map[str] > 1) {
      v.push_back(str);
    }
  }

  sort(v.begin(), v.end());

  cout << v.size() << "\n";

  for (int i = 0 ; i < v.size(); i++) {
    cout << v[i] << "\n";
  }
}