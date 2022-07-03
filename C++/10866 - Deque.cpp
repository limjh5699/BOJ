#include<iostream>
#include<deque>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  deque<int> d;

  int n;
  string s;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> s;
    if (s == "push_front")
    {
      int temp;
      cin >> temp;
      d.push_front(temp);
    }
    else if (s == "push_back")
    {
      int temp;
      cin >> temp;
      d.push_back(temp);
    }
    else if (s == "pop_front")
    {
      if(d.empty() == false)
      {
        cout << d.front() << "\n";
        d.pop_front();
      }
      else if(d.empty() == true) 
      {
        cout << -1 << "\n";
      }
    }
    else if (s == "pop_back")
    {
      if(d.empty() == false)
      {
        cout << d.back() << "\n";
        d.pop_back();
      }
      else if(d.empty() == true) 
      {
        cout << -1 << "\n";
      }
    }
    else if (s == "size")
    {
      cout << d.size() << "\n";
    }
    else if (s == "empty")
    {
      cout << d.empty() << "\n";
    }
    else if (s == "front")
    {
      if(d.empty() == false)
      {
        cout << d.front() << "\n";
      }
      else if(d.empty() == true) 
      {
        cout << -1 << "\n";
      }
    }
    else if (s == "back")
    {
      if(d.empty() == false)
      {
        cout << d.back() << "\n";
      }
      else if(d.empty() == true) 
      {
        cout << -1 << "\n";
      }
    }
  }
}