#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, X;
  cin >> N;
  int A[N];
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  cin >> X;
  sort(A, A + N, greater<int>());
  cout << A[X-1];
  return 0;
}