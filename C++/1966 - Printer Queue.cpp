#include<iostream>
#include<queue>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int count=0;
  int N;
  cin >> N;
  int n, m, importance;
  for (int i = 0; i < N; ++i) {
    count = 0;
    cin >> n >> m;
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    for (int j = 0; j < n; ++j) {
        cin >> importance;
        q.push({ j, importance });
        pq.push(importance);
    }
    while (!q.empty()) {
      int index = q.front().first;
      int value = q.front().second;
      q.pop();
      if (pq.top() == value) {
          pq.pop();
          ++count;
          if (index == m) {
              cout << count << "\n";
              break;
          }
      }
      else q.push({ index, value });
    }
  }
}