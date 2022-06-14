#include<iostream>
#include<stack>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cout.tie(0);
  cin.tie(0);
  
  int n;
  int m;
  string str;
  stack<int> s;

  cin >> n;
  
  for(int i = 0; i < n; i++)
  {
    cin >> str;
    if(str == "push")
    {
      cin >> m;
      s.push(m);
    } 
    else if (str == "pop")
    {
      if(s.size() == 0)
      {
        cout << "-1\n";
      } 
      else 
      {
        cout << s.top() << "\n";
        s.pop();
      }
    }
    else if (str == "size")
    {
      cout << s.size() << "\n";
    }
    else if (str == "empty")
    {
      cout << s.empty() << "\n";
    }
    else if (str == "top")
    {
      if(s.size() == 0)
      {
        cout << "-1\n";
      }
      else
      {
        cout << s.top() << "\n";
      }
    }
  }
}