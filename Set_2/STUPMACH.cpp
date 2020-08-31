#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;
    long int S[N];
    for (int i = 0; i < N; i++)
    {
      cin >> S[i];
    }
    long long int temp, ans = 0, end = N, index, prev = 0;
    while (true)
    {
      temp = INT_MAX;
      for (int i = 0; i < end; i++)
      {
        if ((S[i] - prev) < temp)
        {
          temp = S[i] - prev;
          index = i;
        }
      }
      ans += (temp * end);
      end = index;
      prev += temp;
      if (end == 0)
      {
        break;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}