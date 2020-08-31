#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int A[10][10],i,j,count=0;
		for(i=0; i<10; i++)
		{
			for(j=0; j<10; j++)
			{	scanf("%d",&A[i][j]);
				if(A[i][j]<=30)
				count++;
			}
		}
		if(count>=60)
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0;
}
