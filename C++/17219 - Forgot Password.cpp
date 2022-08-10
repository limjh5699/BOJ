#include<iostream>
#include<map>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, M;
  map<string, string> map;

  cin >> N >> M;

  for(int i = 0; i < N; i++) {
    string address, password;
    cin >> address >> password;
    map[address] = password;
  }

  for(int i = 0; i < M; i++) {
    string ans;
    cin >> ans;
    cout << map[ans] << "\n";
  }
}