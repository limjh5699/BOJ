#include<iostream>
#include<queue>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  queue<int> q;

  int n;
  int k;
  int cnt = 0;

  cin >> n >> k;

  for(int i = 1; i <= n; i++) // 큐에 수 채우기
    q.push(i); 

  cout << "<";

  while(q.size() != 1)
  {
    cnt++;
    if(cnt != k)
    {
      int temp = q.front();
      q.pop();
      q.push(temp);
    }
    else
    {
      cnt = 0;
      cout << q.front() << ", ";
      q.pop();
    } 
    
  }
  cout << q.front() << ">";
}