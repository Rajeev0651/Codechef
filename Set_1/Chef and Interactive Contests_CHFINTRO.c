#include<stdio.h>
int main()
{
	int N,r,i,R;
	scanf("%d%d",&N,&r);
	while(N--)
	{
		scanf("%d",&R);
		if(R<r)
		printf("Bad boi\n");
		else
		printf("Good boi\n");
	}
	return 0;
}
