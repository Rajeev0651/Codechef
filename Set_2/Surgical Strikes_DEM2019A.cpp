#include<bits/stdc++.h>
int distance(int x1, int y1, int x2, int y2)
{
	return(sqrt(pow((y2-y1),2)+pow((x2-x1),2)));
}
using namespace std;
int main()
{
	int N,M,baseX,baseY;
	cin>>N>>M;
	int Ax[N],Ay[N],A_ID[N],Tx[M],Ty[M],T_ID[M];
	for(int i=0; i<N; i++)
		cin>>Ax[i]<<Ay[i]<<A_ID[i];
	for(int i=0; i<M; i++)
		cin>>Tx[i]<<Ty[i]<<T_ID[i];	
	cin>>baseX>>baseY;
	int first_dis[N*M],sec_dis[M];	
	for(int i=0; i<M; i++)
		sec_dis[i] = max()
}
