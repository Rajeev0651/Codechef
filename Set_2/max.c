#include<stdio.h>
int main()
{
	int A[6],max,i,j,flag=0;
	for(i=0; i<6; i++)
	scanf("%d",&A[i]);
	max = A[0];
	for(i=0,j=5; i<j; i++,j--)
	{	
		int temp;
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
	for(i=0; i<6; i++)
	{
		printf("%d\t",A[i]);
	}
	return 0;
}
