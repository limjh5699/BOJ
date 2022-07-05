#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int arr[500001];

int upperBound(int n)
{
	int f = 0, l = N - 1, m;
	for (;;)
	{
		m = (f + l) / 2;

		if (f > l)
		{
			if (arr[l] == n) 
        return l;
			else 
        return -1;
		}

		if (arr[m] <= n) 
      f = m + 1;
		else 
      l = m - 1;
	}
}

int lowerBound(int n)
{
	int f = 0, l = N - 1, m;
	for (;;)
	{
		m = (f + l) / 2;

		if (f > l)
		{
			if (arr[f] == n) 
        return f;
			else 
        return -1;
		}

		if (arr[m] >= n) 
      l = m - 1;
		else 
      f = m + 1;
	}
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N;

  for(int i = 0; i < N; i++)
    cin >> arr[i];
  sort(arr, arr + N);

  cin >> M;
  
  for(int i = 0; i < M; i++)
  {
    int temp;
    cin >> temp;
    if(upperBound(temp) == -1)
      cout << "0 ";
    else
      cout << upperBound(temp) - lowerBound(temp) + 1 << " ";
  }
}