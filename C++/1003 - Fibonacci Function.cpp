#include<iostream>
using namespace std;

int arr[41] = {0, 1, 1};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, M;
  
  cin >> N;

  for(int i = 3; i < 41; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }

  for(int i = 0; i < N; i++) {
    cin >> M;

    if(M == 0) cout << "1 0\n";
    else if (M == 1) cout << "0 1\n";
    else cout << arr[M-1] << " " << arr[M] << "\n";
  }
}