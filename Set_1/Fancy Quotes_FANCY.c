#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	fflush(stdin);
	while(T--)
	{
		char c[200],b[200];
		int i,j,flag=0;
		scanf("%[^\n]s",c);
		b[0]=' ';
		for(i=1,j=0; j<strlen(c); j++)
		{
			b[i]=c[j];
			i++;
		}
		b[i]=' ';
		b[i+1]='\0';
		for(i=0; i<strlen(b); i++)
		{
			if(b[i]==' '&&b[i+1]=='n'&&b[i+2]=='o'&&b[i+3]=='t'&&b[i+4]==' ')
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		printf("Real Fancy\n");
		else if(flag==0)
		printf("regularly fancy\n");
		fflush(stdin);
	}
	return 0;
}
