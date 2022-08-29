#include<iostream>
using namespace std;

long long arr[100001], sum[100001], N, M, a, b, temp = 0;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N >> M;
  
  for(int i = 1; i <= N; i++) {
    cin >> arr[i];
    temp += arr[i];
    sum[i] += temp;
  }

  for(int i = 0; i < M; i++) {
    cin >> a >> b;
    cout << sum[b] - sum[a - 1] << "\n";
  }
}