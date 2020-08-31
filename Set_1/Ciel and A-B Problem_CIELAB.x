#include<stdio.h>
int main()
{
	int a,b,res,x;
	scanf("%d%d",&a,&b);
	res = a-b;
	x = res%10;
	res = res/10;
	res = res*10+x-1;
	printf("%d\n",res);
	return 0;
}
