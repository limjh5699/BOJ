#include<iostream>
#include<stack>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  stack<string> s;
  string str = "";
    
  while (1)
  {
    getline(cin, str);
    if(str[0] == '.') break;
    
    while (!s.empty()) s.pop();
    
    for(int i = 0; i < str.length() - 1; i++)
    {
      if(str[i] == '(')
        s.push("(");  

      else if (str[i] == '[')
        s.push("[");

      else if (str[i] == ')')
      {
        if(!s.empty() && s.top() == "(") s.pop();
        else
        {
          cout << "no" << "\n"; 
          break;
        } 
      }

      else if (str[i] == ']')  
      {
        if(!s.empty() && s.top() == "[") s.pop();
        else 
        {
          cout << "no" << "\n";
          break;
        }
      }

      if (s.empty() && i == str.length() - 2)
      {
        cout << "yes" << "\n";
      }
      else if (!s.empty() && i == str.length() - 2)
      {
        cout << "no" << "\n";
      }
    }
  }
}