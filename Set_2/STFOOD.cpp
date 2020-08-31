#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while (T--)
  {
    int N;
    cin>>N;
    int S=0,P=0,V=0, ans = -1, temp=0;
    for(int i=0; i<N; i++)
    {
      cin>>S>>P>>V;
      temp = (P/(S+1))*V;
      ans = max(ans, temp);
    }
    cout<<ans<<"\n";
  }
  return 0;
}