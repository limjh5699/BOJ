#include<iostream>
#include<map>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int T, n;

  cin >> T;

  for(int i = 0; i < T; i++) {

    int cnt = 1;
    map<string, int> m;

    cin >> n;

    for(int j = 0; j < n; j++) {
      string str1, str2;
      cin >> str1 >> str2;

      if(m.find(str2) == m.end()) m.insert({str2, 1});
      else m[str2]++;
    }

    for(auto j : m) {
      cnt *= (j.second + 1);
    }

    cnt -= 1;

    cout << cnt << "\n";
  }
}