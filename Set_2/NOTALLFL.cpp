#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, K, r = 0, l = -1, unique = 0, count = 0, ans = INT_MIN;
    cin >> N >> K;
    int A[N + 1];
    for (int i = 0; i < N; i++)
      cin >> A[i];
    int arr[K + 1];
    memset(arr, 0, sizeof(int) * (K + 1));
    arr[A[r]]++;
    unique++;
    while (r < N && l < N && l < r)
    {
      if (unique < K)
      {
        cout << r << " " << arr[A[r]] << "\n";
        arr[A[++r]]++;
        if (arr[A[r]] == 1)
          unique++;
        if (unique < K)
          ans = max(ans, r - l);
      }
      else
      {
        if (arr[A[++l]] == 1)
          unique--;
        arr[A[l]]--;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}