#include<iostream>
using namespace std;

int N, r, c, ans=0;

void Z(int x, int y, int size) {
  if(c == x && r == y) {
    cout << ans;
    return;
  }

  if(c < x + size && r < y + size && c >= x && r >= y) {
    Z(x, y, size / 2);
    Z(x + size / 2, y, size / 2);
    Z(x, y + size / 2, size / 2);
    Z(x + size / 2, y + size / 2, size / 2);
  } else {
    ans += size * size;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N >> r >> c;
  Z(0, 0, (1 << N));
}