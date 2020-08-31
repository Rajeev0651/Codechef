#include <stdio.h>
#include <stdlib.h>
int checkdigit(unsigned long long int temp)
{
	int sum=0;
	while(temp > 0)
	{
		sum = sum + temp % 10;
		temp = temp/10;
	}
	if((sum%10) == 0)
		return 1;
	return 0;
}
int main()
{
	unsigned long long int t,i,N,last;
	scanf("%llu",&t);
	while(t--)
	{
		scanf("%llu",&N);
		for(i=1; N>0; i++)
		{
			if(checkdigit(i))
			{
				N--;
				if(N==0)
				last = i;
			//	printf("%d\n",i);
			}
		}
		printf("%llu\n",last);	
	}
	return 0;
}
