#include<iostream>
#include<stack>
using namespace std;

int main() {
  stack<int> s;
  string str;
  int n;
  int m=0;

  cin >> n;

  while(n--) {
    int x;
    cin >> x;
    if(x > m) {
      while(x > m) {
        s.push(++m);
        str += "+";
      }
      s.pop();
      str += "-";
    } else if (x <= m) {
      bool find = false;
      if(!s.empty()) {
        if(x == s.top()) {
          find = true;
        }
        s.pop();
        str += "-";
      }
      if(!find) {
        cout << "NO";
        return 0;
      }
    }
  }

  for(auto ans : str) {
    cout << ans << "\n";
  }
}