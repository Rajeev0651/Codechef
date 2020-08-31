#include <bits/stdc++.h>
using namespace std;
vector<long long int> A;
void decToBinary(int n)
{
  for (int i = 31; i >= 0; i--)
  {
    int k = n >> i;
    if (k & 1)
      A.push_back(1);
    else
      A.push_back(0);
  }
}
int findMaxSubarraySum(vector<long long> arr, int n, int sum)
{

  int curr_sum = arr[0], max_sum = 0, start = 0;
  for (int i = 1; i < n; i++)
  {
    if (curr_sum <= sum)
      max_sum = max(max_sum, curr_sum);

    while (curr_sum + arr[i] > sum && start < i)
    {
      curr_sum -= arr[start];
      start++;
    }
    curr_sum += arr[i];
  }
  if (curr_sum <= sum)
    max_sum = max(max_sum, curr_sum);

  return max_sum;
}
int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    A.clear();
    int X, Y, L, R, val, ans = 0, mid = 0;
    cin >> X >> Y >> L >> R;
    val = X & Y;
    decToBinary(val);
    for (auto i : A)
      cout << i << " ";
   cout<<"\n";
   for (int i = 0, j = 31; i < A.size(); i++, j--)
    {
      if (A[i] == 1)
        A[i] = pow(2, j);
    }
    ans = findMaxSubarraySum(A, A.size(), R);
    cout << ans << "\n";
  }
  return 0;
}