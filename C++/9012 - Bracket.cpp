#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool answer(string str) 
{
  stack<char> s;

  cin >> str;
  
  for(int i = 0; i < str.length(); i++)
  {
    if(str.at(i) == '(')
    {
      s.push('(');
    }
    else if(str.at(i) == ')')
    {
      if(s.empty())
      {
        return false;
      }
      else 
      {
        s.pop();
      }
    }
  }

  return s.empty();
}

int main()
{
  ios::sync_with_stdio(0);
  cout.tie(0);
  cin.tie(0);

  int n;
  string str;
  
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    if(answer(str))
    {
      cout << "YES" << "\n";
    }
    else 
    {
      cout << "NO" << "\n";
    }
  }
  
}