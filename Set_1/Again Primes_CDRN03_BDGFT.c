#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char S[100000];
		int pz,po,x=0,y=0,A[100005]={0},B[100000]={0},one=0,zero=0,i,j,res=0,pro;
		int rz,ro;	
		scanf("%s",S);
		for(i=0; i<strlen(S); i++)
		{
			if(S[i]=='0')
			{
					zero++;
					}
			else
				one++;
		}
		for(i=0; i<strlen(S); i++)
		{	
			if(S[i] == '0')
			{
				A[i] = zero-1;
				zero--;
				B[i] = one;
			}
			else if(S[i]=='1')
			{
				B[i] = one-1;
				one--;
				A[i] = zero;
			}
		}
	/*	for(i=0; i<strlen(S); i++)
		{
			printf("%d\t%d\n",A[i],B[i]);
		}*/
		for(i=0; i<strlen(S)-1; i++)
		{	x=y=0;
			for(j=i+1; j<strlen(S); j++)
			{	x=y=0;
				if(S[i]=='0')
				{
					x++;
				}
				if(S[i]=='1')
				{
					y++;
				}
				rz = A[i]-A[j];
				ro = B[i]-B[j];
				rz = rz+x;
				ro = ro+y;
				pro = ro*ro;
				if(pro == rz)
				{
					res++;
				}
			}
		}
		printf("%d\n",res);
	}
	return 0;
}
