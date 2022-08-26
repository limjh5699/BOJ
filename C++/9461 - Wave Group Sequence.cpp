#include<iostream>
using namespace std;

long long arr[101];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int T, N;

  cin >> T;

  arr[0] = 1;
  arr[1] = 1;
  arr[2] = 1;
  
  while(T--) {
    cin >> N;
    
    for(int i = 3; i < N; i++) {
      arr[i] = arr[i - 2] + arr[i - 3];
    }

    cout << arr[N - 1] << "\n";
  }
}