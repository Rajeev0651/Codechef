#include<stdio.h>
int fnc(const void* a,const void* b)
{
	return(*(int*)a - *(int*)b);
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char S[100005];
		int x=0,i,A[26]={0},flag=1,j,temp;
		scanf("%s",S);
		for(i=0; i<strlen(S); i++)
		{
			A[S[i]-97]++;
		}
		for(i=0; i<26; i++)
		{
			for(j=i+1; i<26; i++)
			{
				if(A[i]>A[j])
				{
						temp = A[i];
						A[i] = A[j];
						A[j] = temp;
				}
			}
		}
		while(A[x]==0)
		{
			x++;
		}
		for(i=x+2; i<27; i++)
		{
			if(A[i]!=A[i-1]+A[i-2])
			{
				flag = 0;
			}
		}
		if(flag==0)
			printf("Not\n");
		else if(flag==1)
			printf("Dynamic\n");	
	}
	return 0;
}
