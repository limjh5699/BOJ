#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  long long N, M, sum, max = 0, start, end, mid;
  vector<int> v;
  cin >> N >> M;
  
  for (int i = 0; i < N; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end());

  start = 0;
  end = v[N - 1];

  while (start <= end) {
    sum = 0;
    mid = (start + end) / 2;

    for (int i = 0; i < N; i++) {
      if (v[i] - mid > 0) {
        sum += v[i] - mid;
      }
    }
    
    if(sum >= M) {
      start = mid + 1;
      if(mid > max) {
        max = mid;
      }
    } else {
      end = mid - 1;
    }
  }

  cout << max;
}