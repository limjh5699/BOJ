#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<pair<int, string>> v;

bool cmp(pair<int, string> a, pair<int, string> b)
{ 
  return a.first < b.first;
}

int main() 
{
  ios::sync_with_stdio(0);
  cout.tie(0);
  cin.tie(0);

  int N;
  cin >> N;

  for(int i = 0; i < N; i++)
  {
    int age;
    string name;
    cin >> age >> name;
    v.push_back({age, name});
  }

  stable_sort(v.begin(), v.end(), cmp);

  for(int i = 0; i < v.size(); i++)
    cout << v[i].first << " " << v[i].second << "\n";
}