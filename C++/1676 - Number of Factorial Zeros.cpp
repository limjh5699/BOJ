#include<iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, a = 0, b = 0;
  int ans;
  cin >> N;

  for(int i = 2; i <= N; i++) {
    int n = i;

    while(n % 2 == 0) {
      n /= 2;
      a++;
    }
    
    while(n % 5 == 0) {
      n /= 5;
      b++;
    }
  }

  if(a > b) ans = b;
  else ans = a;

  cout << ans;
}