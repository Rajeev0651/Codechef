#include<stdio.h>
int main()
{
	int a,b,res,x;
	scanf("%d%d",&a,&b);
	res = abs(a-b);
	if(res%10==9)
	printf("%d\n",res-1);
	else 
	printf("%d\n",res+1);
	return 0;
}
