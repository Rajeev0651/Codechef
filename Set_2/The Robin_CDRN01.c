#include<stdio.h>
int main()
{
	int T,i,x,r;
	scanf("%d",&T);
	while(T--)
	{
	int B;
	scanf("%d",&B);
	while(1)
	{
		if(B%100!=0 && B%10==0)
		{	x=B;
			break;
		}
		B++;
	}
	printf("%d\n",x);
	}
	return 0;
}
