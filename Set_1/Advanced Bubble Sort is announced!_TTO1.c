#include<stdio.h>
int main()
{
	long int N,i,j,found=0,temp,res=-1;
	scanf("%ld",&N);
	long int A[N+5];
	for(i=0; i<N; i++)
		scanf("%ld",&A[i]);
	for(i=0; i<N-2; i++)
	{
		if(A[i]>A[i+2])
		{
			found = 1;
			temp = A[i];
			A[i] = A[i+2];
			A[i+2] = temp;
		}
		if(i==N-3 && found==0)
		break;
		if(i==N-3 && found==1)
		{
			found = 0;
			i=-1;
		}
	}
	for(i=0; i<N-1; i++)
	{
		if(A[i]>A[i+1])
		res = i;
	}
	if(res>=0)
	printf("%ld\n",res);
	else
	printf("OK\n");	
	return 0;
}
