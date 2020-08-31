#include<stdio.h>
int GCD(int,int);
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
			int L,B,a;
			scanf("%d%d",&L,&B);
			a= GCD(L,B);
			printf("%d\n",(L/a)*(B/a));
	}
	return 0;
}
int GCD(L,B)
{
	if(B==0)
	return L;
	return GCD(B,L%B);
}
