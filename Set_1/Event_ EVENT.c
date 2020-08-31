#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char S[10],E[10];
		int L,R,s,e,d;
		scanf("%s%s%d%d",S,E,L,R);
		if(strcmp(S,"saturday")==0)
		s=1;
		if(strcmp(E,"saturday")==0)
		e=1;
		if(strcmp(S,"sunday")==0)
		s=2;
		if(strcmp(E,"sunday")==0)
		e=2;
		if(strcmp(S,"monday")==0)
		s=3;
		if(strcmp(E,"monday")==0)
		e=3;
		if(strcmp(S,"tuesday")==0)
		s=4;
		if(strcmp(E,"tuesday")==0)
		e=4;
		if(strcmp(S,"wednesday")==0)
		s=5;
		if(strcmp(E,"wednesday")==0)
		e=5;
		if(strcmp(S,"thursday")==0)
		s=6;
		if(strcmp(E,"thursday")==0)
		e=6;
		if(strcmp(S,"friday")==0)
		s=7;
		if(strcmp(E,"friday")==0)
		e=7;
		d=abs(s-e);
		if(d<L && d>R)
		printf("impossible\n");
		else if(d>L && d<=R)
		printf("many\n");
		else
		printf("%d\n",d);
	}
	return 0;
}
