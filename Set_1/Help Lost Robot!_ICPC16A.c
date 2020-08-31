#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int x1,y1,x2,y2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		if(x1!=x2 && y1!=y2)
		{
			printf("sad\n");
			continue;
		}
		else
		{
			if(x1==x2)
			{if(y1<y2)
			{
				printf("up\n");
				continue;
			}
			else
			{
				printf("down\n");
			}
			}
			else
			{
			if(x1<x2)
			{
				printf("right\n");
				continue;
			}
			else
			{
				printf("left\n");
			}	
			}
		}
	}
	return 0;
}
