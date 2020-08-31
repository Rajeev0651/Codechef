#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, A = 0, B = 0;
    cin >> N;
    char S[N * 2];
    for (int i = 0; i < N * 2; i++)
    {
      cin >> S[i];
    }
    int aleft = N, bleft = N, ans = N * 2;
    for (int i = 0; i < N * 2; i++)
    {
      if (i % 2 == 0)
      {
        aleft--;
        A += S[i] - 48;
        if ((B - A) > aleft)
        {
          ans = i + 1;
          break;
        }
        if ((A - B) > bleft)
        {
          ans = i + 1;
          break;
        }
      }
      else
      {
        bleft--;
        B += S[i] - 48;
        if ((A - B) > bleft)
        {
          ans = i + 1;
          break;
        }
        if ((B - A) > aleft)
        {
          ans = i + 1;
          break;
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}