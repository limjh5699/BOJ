#include<iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, cnt=0, ans=0, temp=0;

  cin >> N;

  while(cnt != N)
  {
    ans++;
    temp = ans;
    
    while(temp != 0)
    {
      if(temp % 1000 == 666)
      {
        cnt++;
        break;
      }
      else
      {
        temp /= 10;
      }
    }
  }

  cout << ans;
}