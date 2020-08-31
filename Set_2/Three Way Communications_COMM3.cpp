#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		float R,x1,x2,x3,y1,y2,y3,r1,r2,r3;
		scanf("%f",&R);
		scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
		r1=sqrt(pow((y2-y1),2)+pow((x2-x1),2));
		r2=sqrt(pow((y3-y1),2)+pow((x3-x1),2));
		r3=sqrt(pow((y3-y2),2)+pow((x3-x2),2));
		if(r1>R)
		{
					if(r2<=R && r3<=R)
					{printf("yes\n");continue;}
					else
					{printf("no\n");continue;}
		}
		if(r2>R)
		{
					if(r1<=R && r3<=R)
					{printf("yes\n");continue;}
					else
					{printf("no\n");continue;}
		}
		if(r3>R)
		{
					if(r1<=R && r2<=R)
					{printf("yes\n");continue;}
					else
					{printf("no\n");continue;}
		}
		printf("yes\n");
	}
	return 0;
}
