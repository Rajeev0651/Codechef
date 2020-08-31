#include<bits/stdc++.h>
using namespace std;
int main()
{
	char S[1005];
	long long int i,j,k,len,x=0,y=0,count=0;
	int* begin = new int[6000000];
	int* end = new int[6000000];
	scanf("%s",S);
	int n = strlen(S);
	char** C = new char*[6000000];
	for(i=0; i<6000000; i++)
	C[i] = new char[1005];
	for(i=1; i<=n; i++)
	{	for(j=0; j<=n-i; j++)
		{	for(k=j; k<=(j+i-1); k++)
			{	
				C[x][y] = S[k];
				end[x]=k;
				y++;
				begin[x]=j;
			}
			C[x][y]='\0';
			x++;y=0;		
		}		
	}
	for(i=0; i<x; i++)
	{
		for(j=i+1; j<x; j++)
		{	
			int len1 = strlen(C[i]);
			int len2 = strlen(C[j]);
			char cmp1[len1+len2];
			char cmp2[len1+len2];
			strcpy(cmp1,C[i]);strcat(cmp1,C[j]);
			strcpy(cmp2,cmp1);
			cmp2[0]=cmp1[len1+len2-1];
			cmp2[len1+len2-1]=cmp1[0];
			if(strcmp(cmp1,cmp2)==0 && end[i]<begin[j])
			{
				count++;
			}	
			strcpy(cmp1,C[j]);strcat(cmp1,C[i]);
			strcpy(cmp2,cmp1);
			cmp2[0]=cmp1[len1+len2-1];
			cmp2[len1+len2-1]=cmp1[0];
			if(strcmp(cmp1,cmp2)==0 && end[j]<begin[i])
			{
				count++;
			}	
		}
	}
	printf("%lld\n",count);
	free(begin);
	free(end);
	return 0;
}

