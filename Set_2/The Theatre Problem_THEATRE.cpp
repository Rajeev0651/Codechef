#include <bits/stdc++.h> 
using namespace std; 
unsigned int mask;
int no_of_sol = 0;
int all_placed = (1<<4)-1;
int pos[4];
int maxm;
void backtrack(int N, int M, int col_mask,int rwm,int col, int V[4][4]) {
  if(col == M) {
  	int k=0,l=0,rup=125,minus=0,ax=0,res[4]={0};
    no_of_sol++;
		for(int r = 0;r<N;r++) {
			for(int c = 0;c<N;c++) {
				if(pos[c] == r && mask&(1<<c))
				{
				//	cout<<V[r][c]<<" ";
					if(V[r][c]!=0)
						res[l++] = V[r][c];
				}
				//else
				//	cout<<". ";
			}
		//	printf("\n\n");
		}
	//	cout<<l<<"\n";
		sort(res,res+4, greater<int>());
		for(int i=0; i<4; i++)
		{
			if(res[i]==0)
				minus+=100;	
		}
		for(int i=0; i<4; i++)
		{	
			rup-=25;
			ax+= (res[i]*rup);
		}
		ax-=minus;
		maxm = max(ax,maxm);
	//	printf("-------------\n\n");
		return;	
	}else {
		if(col_mask) {
			int col_pos = __builtin_ctz(col_mask);
			int mask = all_placed & (~(rwm)); 
			while(mask) {
				int m = mask & -mask;
				mask = mask - m;
				pos[col_pos] = __builtin_ctz(m); 	
				col_mask = col_mask & (~(1<<col_pos));
				backtrack(N,M,col_mask,rwm|m,col+1,V);
			}
		}
	}
}

void solve(int n,int k,int idx,int cnt,int M[4][4]) 
{	
	if(cnt == (n-k)) 
	{	
		backtrack(n,k,mask,0,0,M);
		return;
	}
	else if(idx >= 0)
	{	for(int i=idx;i>=0;i--)
		{	mask &= ~(1<<i);
			solve(n,k,i - 1,cnt+1,M);
			mask |= (1<<i);
		}
	}
}
int main()
{
	int T,sum=0;
	cin>>T;
	while(T--)
	{	maxm=-500;
		int X,day;			 
		char mov;
		cin>>X;
		int arr[4][4];
		for(int i=0; i<4; i++)
		{	for(int j=0; j<4; j++)
			{
				arr[i][j]=0;
			}
		}
		for(int i=0; i<X; i++)
		{
			cin>>mov>>day;
			switch(day)
			{
				case 3 : day = 1;break;
				case 6 : day = 2;break;
				case 9 : day = 3;break;
				case 12 : day = 4;break;
			}
			arr[mov-65][day-1]++;
		}
		for(int i=0;i<4;i++) mask |= (1<<i);
		solve(4,1,3,0,arr);
		solve(4,2,3,0,arr);
		solve(4,3,3,0,arr);
		solve(4,4,3,0,arr);
		sum+=maxm;
		cout<<maxm<<"\n";
	}
	cout<<sum<<"\n";
	return 0;
}
