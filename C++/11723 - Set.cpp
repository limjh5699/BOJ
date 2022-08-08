#include<iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string input;
  int M, inputNum;
  int arr[21] = {0, };

  cin >> M;

  for (int i = 0; i < M; i++) {
    cin >> input;
    
    if (input == "add") {
      cin >> inputNum;
      if (arr[inputNum] == 0) {
        arr[inputNum] = 1;
      }
    } else if (input == "remove") {
      cin >> inputNum;
      if (arr[inputNum] == 1) {
        arr[inputNum] = 0;
      }
    } else if (input == "check") {
      cin >> inputNum;
      if (arr[inputNum] == 1) {
        cout << "1\n"; 
      } else {
        cout << "0\n";
      }
    } else if (input == "toggle") {
      cin >> inputNum;
      if (arr[inputNum] == 1) {
        arr[inputNum] = 0;
      } else {
        arr[inputNum] = 1;
      }
    } else if (input == "all") {
      for(int i = 1; i <= 20; i++) {
        arr[i] = 1;
      }
    } else if (input == "empty") {
      for(int i = 1; i <= 20; i++) {
        arr[i] = 0;
      }
    }
  }
}