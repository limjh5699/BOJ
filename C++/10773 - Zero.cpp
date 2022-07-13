#include<iostream>
#include<stack>
using namespace std;

stack<int> s;

void solve()
{
  int n;
  cin >> n;
  
  if(n != 0) s.push(n);
  else s.pop();
}

int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, temp=0;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    solve();
  }

  while (s.size() >= 1)
  {
    temp += s.top();
    s.pop();
  }

  cout << temp;
} 