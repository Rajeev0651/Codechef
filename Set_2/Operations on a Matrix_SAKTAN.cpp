#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll N,M,Q,row_odd=0, col_odd=0,x,y,res;
		cin>>N>>M>>Q;
		ll row[100001]={0}, col[100001]={0};
		while(Q--)
		{
			cin>>x>>y;
			row[x]++;	col[y]++;	
		}
		for(int i=1; i<=100000; i++)
		{
			if(row[i]%2==1)
				row_odd++;
			if(col[i]%2==1)
				col_odd++;		
		}
	//	cout<<row_odd<<"\t"<<col_odd<<"\n";
	//	cout<<row_odd<<"\t"<<col_odd<<"\n";
		res = (col_odd*N)+(row_odd*M)-(2*row_odd*col_odd);	
		cout<<res<<"\n";
	}	
	return 0;
}
