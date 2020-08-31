#include<stdio.h>
int main()
{
	int n,i,j,max1,max2 = -1,k;
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	scanf("%d",&a[i]);
	max1 = a[0];
	
	for(i=0 ;i<n; i++)
	{
		if(a[i]>=max1)
		max1 = a[i];
	}
	for(i=0 ;i<n; i++)
	{
		if(a[i]<max1 && a[i]!=max1 && a[i]>max2)
		max2 = a[i];
	}
	if (max2==-1)
	k=0;
	else
	{
		k = max2;
	}
	printf("%d\n",k);
	return 0;
}
