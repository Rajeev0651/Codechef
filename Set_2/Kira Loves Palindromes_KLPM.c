#include<stdio.h>
#include<string.h>
int main()
{
	char S[1005];
	int i,j,k,len,x=0,y=0;
	scanf("%s",S);
	n = strlen(S);
	char k[600000][1005];
	for(i=1; i<=n; i++)
	{	for(j=0; j<n-i; j++)
		for(k=j; k<=(j+i-1); k++)
		{
			S[k] = k[x][y];
			y++;	
		}
		printf("%s",k[x][y]);
		x++;			
	}
	return 0;
}
