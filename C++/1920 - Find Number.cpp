#include<iostream>
#include<algorithm>
using namespace std;

void binarySearch(int n, int arr[], int m)
{
  int low = 0;
  int high = n - 1;
  int mid;

  while (low <= high)
  {
    mid = (low + high) / 2;

    if(arr[mid] == m)
    {
      cout << "1" << "\n";
      return;
    }
    else if (arr[mid] < m)
    {
      low = mid + 1;
    }
    else if (arr[mid] > m)
    {
      high = mid - 1;
    }
  }
  
  cout << "0" << "\n";
  return;
}

int main()
{
  ios::sync_with_stdio(0);
  cout.tie(0);
  cin.tie(0);

  int n, a[100001], m, m2;

  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> a[i];

  sort(a, a + n);
  
  cin >> m;
  for(int i = 0; i < m; i++)
  {
    cin >> m2;
    binarySearch(n, a, m2);
  }
}