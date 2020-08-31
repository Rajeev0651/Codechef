#include<stdio.h>
int count( int S[], int m, int n ) 
{ 
    int table[n+1],i,j; 
    memset(table, 0, sizeof(table));  
    table[0] = 1;  
    for(i=0; i<m; i++) 
        for(j=S[i]; j<=n; j++) 
            table[j] += table[j-S[i]]; 
    return table[n]; 
}  
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int p,d,diff,pairs,m,arr[]={4,2,1};
		scanf("%d%d",&p,&d);
		diff = p-d;
		m = sizeof(arr)/sizeof(arr[0]);
		pairs = count(arr,m,diff);
		if(diff==0)pairs=0;
		printf("%d\n",pairs);
	}
	return 0;
}
