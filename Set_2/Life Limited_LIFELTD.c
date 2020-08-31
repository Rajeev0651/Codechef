#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char A[3],B[3],C[3];
		int i,flag=0;
		scanf("%s",A);
		scanf("%s",B);
		scanf("%s",C);
		for(i=0; i<3; i++)
		{
			if(A[i]=='l' && B[i]=='l' && B[i+1]=='l')
			flag=1;
			if(B[i]=='l' && C[i]=='l' && C[i+1]=='l')
			flag=1;
		}
		if(flag==1)
		printf("yes\n");
		else
		printf("no\n");	
	}
	return 0;
}
