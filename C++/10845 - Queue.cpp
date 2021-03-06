#include<iostream>
#include<queue>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cout.tie(0);
  cin.tie(0);

  int n;
  int m;
  string str;
  queue<int> q;

  cin >> n;
  
  for(int i = 0; i < n; i++)
  {
    cin >> str;
    if(str == "push")
    {
      cin >> m;
      q.push(m);
    } 
    else if (str == "pop")
    {
      if(q.size() == 0)
      {
        cout << "-1\n";
      } 
      else 
      {
        cout << q.front() << "\n";
        q.pop();
      }
    }
    else if (str == "size")
    {
      cout << q.size() << "\n";
    }
    else if (str == "empty")
    {
      cout << q.empty() << "\n";
    }
    else if (str == "front")
    {
      if(q.size() == 0)
      {
        cout << "-1\n";
      }
      else
      {
        cout << q.front() << "\n";
      }
    }
    else if (str == "back")
    {
      if(q.size() == 0)
      {
        cout << "-1\n";
      }
      else
      {
        cout << q.back() << "\n";
      }
    }
  }
}