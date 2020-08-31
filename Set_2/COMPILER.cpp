#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  while (N--)
  {
    string S;
    long int ans = 0, count = 0;
    cin >> S;
    for (long int i = 0; i < S.length(); i++)
    {
      if (S.at(i) == '<')
        count++;
      else
      {
        count--;
      }
      if (count == 0)
      {
        ans = max(ans, i + 1);
      }
      if (count < 0)
        break;
    }
    cout << ans << "\n";
  }
  return 0;
}