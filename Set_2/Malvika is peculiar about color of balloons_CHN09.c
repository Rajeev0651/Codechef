#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char s[105];
		int a=0,b=0,i;
		scanf("%s",s);
		for(i=0; i<strlen(s); i++)
		{
			if(s[i]=='a')
			a++;
			else
			b++;
		}
		if(a<=b)
		printf("%d\n",a);
		else
		printf("%d\n",b);
	}
	return 0;
}
