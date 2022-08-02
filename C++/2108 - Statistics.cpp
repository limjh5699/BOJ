#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  int min = 9999, max = -9999, second, sum = 0;
  bool isSecond = false;
  vector<int> v;
  vector<int> v2(8001, 0);
  
  if(N % 2 != 0) {

    for(int i = 0; i < N; i++) {
      int n;
      cin >> n;
      v.push_back(n);
      sum += n;
      int temp = (v[i] <= 0 ? abs(v[i]) : v[i] + 4000);
      v2[temp]++;
      if(v2[temp] > max) max = v2[temp];
    }
    sort(v.begin(), v.end());

    // 평균 출력
    cout << (int)round(sum / (double)N) << "\n";

    // 중앙값 출력
    cout << v[v.size() / 2] << "\n";

    // 최빈값 출력
    for(int i = -4000; i < 4001; i++) {
      int temp = i <= 0 ? abs(i) : i + 4000;
      if(v2[temp] == max) {
        second = i;
        if(isSecond) break;
        isSecond = true;
      }
    }
    cout << second << "\n";

    // 범위 출력
    min = v[0];
    max = v[v.size() - 1];
    cout << max - min << "\n";
  }
}