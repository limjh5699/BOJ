#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  long long K, N, start, mid, end, sum, max=0;
  vector<long long> v;
  
  cin >> K >> N;
  
  for (int i = 0; i < K; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end());
  
  start = 1;
  end = v[K - 1];

  while (start <= end) {
    sum = 0;
    mid = (start + end) / 2;

    for (int i = 0; i < K; i++) {
      sum += v[i] / mid;
    }

    if(sum >= N) {
      start = mid + 1;
      if(mid > max) {
        max = mid;
      }
    } else if (sum < N) {
      end = mid - 1;
    }
  }

  cout << max;
}