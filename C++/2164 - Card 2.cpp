#include<iostream>
#include<queue>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  int cnt = 1;
  queue<int> q;

  cin >> N;

  for(int i = 1; i <= N; i++)
    q.push(i);

  while(q.size() != 1)
  {
    if(cnt == 2)
    {
      int temp = q.front();
      q.pop();
      q.push(temp);
      cnt = 1;
    }

    q.pop();
    cnt++;
  }

  cout << q.front();
}