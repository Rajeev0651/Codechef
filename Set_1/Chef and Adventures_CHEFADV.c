#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int N,M,X,Y,a,b,c,d;
		scanf("%ld%ld%ld%ld",&N,&M,&X,&Y);
		a = N%X;	c = N/X;
		b = M%Y;	d = M/Y;
		if((c*X+1==N && d*Y+1==M)||(c*X+2==N && d*Y+2==M) || X==1 && d*Y+1==M || Y==1 && c*X+1==N|| X==1 && d*Y+2==M || Y==1 && c*X+2==N)
		printf("Chefirnemo\n");
		else 
		printf("Pofik\n");
	}
	return 0;
}
