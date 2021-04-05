#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int fun(long long int n)
{
  return floor(log10(n) + 1);
}

int main()
{
  long long int N;
  cin >> N;
  int len = fun(N);
  long long int X = pow(N, 4);
  long long int k = pow(10, len);
  if (X % k == N)
    cout << "TRUE\n";
  else
    cout << "FALSE\n";
  return 0;
}