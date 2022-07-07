#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cout.tie(0);
  cin.tie(0);

  int n;
  vector<pair<int, int>> v;
  cin >> n;

  for(int i = 0;  i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    v.push_back({ y, x });
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++)
  {
    cout << v[i].second << " " << v[i].first << '\n';
  }
}