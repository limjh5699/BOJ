#include<iostream>
#include<vector>
using namespace std;

int n;
vector<pair<int, int>> v;

int solve(int i)
{
  int cnt = 1;
  for(int j = 0; j < n; j++)
  {
    if(v[i].first < v[j].first && v[i].second < v[j].second) cnt++;
    else continue;
  }

  return cnt;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int x, y;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> x >> y;
    v.push_back({x, y});
  }
  for(int i = 0; i < n; i++)
    cout << solve(i) << " ";
}