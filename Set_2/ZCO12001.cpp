#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, a = 0, b = -1, c = -1, d = 0;
  stack<int> S;
  cin >> N;
  int A[N];
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < N; i++)
  {
    if (A[i] == 1)
    {
      S.push(i + 1);
      if (a < S.size())
      {
        a = S.size();
        b = i + 1;
      }
    }
    else
    {
      S.pop();
    }
  }
  int ans = 0, count = 0, index;
  for (int i = 0; i < N; i++)
  {
    if (A[i] == 1)
    {
      count++;
      S.push(i + 1);
    }
    else
    {
      count++;
      S.pop();
    }
    if (S.empty() == true)
    {
      if (ans < count)
      {
        ans = count;
        index = i - count + 2;
      }
      count = 0;
    }
  }
  cout << a << " " << b << " " << ans << " " << index << "\n";
  return 0;
}