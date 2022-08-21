#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int N, max = 0;
  vector<int> v;
  
  cin >> N;

  for(int i = 0; i < N; i++) {
    int input;
    cin >> input;
    v.push_back(input);
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++) {
    int sum = 0;

    for(int j = 0; j <= i; j++) {
      sum += v[j];
    }

    max += sum;
  }

  cout << max;
}