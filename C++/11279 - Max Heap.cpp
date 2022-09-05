#include<iostream>
#include<queue>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, x;
  priority_queue<int, vector<int>> q;

  cin >> N;

  for(int i = 0; i < N ; i++) {
    cin >> x;
    
    if(x == 0) {
      if(q.empty()) {
        cout << "0\n";
      } else {
        cout << q.top() << "\n";
        q.pop();
      }
    } else {
        q.push(x);
    }
  }
}