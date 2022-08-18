#include<iostream>
#include<map>
using namespace std;

string arr[100001];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, M;
  map<string, int> m;
  
  cin >> N >> M;

  for(int i = 1; i <= N; i++) {
    string temp;
    cin >> temp;
    arr[i] = temp;
    m.insert({temp, i});
  }

  for(int i = 0; i < M; i++) {
    string str;
    int num;
    cin >> str;
    if(isdigit(str[0])) {
      num = stoi(str);
      cout << arr[num] << "\n";
    } else {
      auto temp = m.find(str);
      cout << temp->second << "\n";
    }
  }
}