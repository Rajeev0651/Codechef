#include<stdio.h>
int gcd(int a, int b)  
{  
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
}
int lcm(int a, int b)  
{  
    return (a*b)/gcd(a, b);  
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int A,B,L,R,temp,i,AS=0,BS=0,CS=0,lcmR,count = 0;
		scanf("%ld%ld%ld%ld",&A,&B,&L,&R);
		if(L>R)
		{
			temp = L;
			L = R;
			T = temp;
		}
		lcmR = lcm(A,B);
		for(i=L; i<=R; i++)
		{
			if(i%A==0)
			AS = AS+i;
			if(i%B==0)
			BS = BS+i;
			if(i%lcmR==0)
			CS = CS+i;
		}
		if((AS+BS-CS)%2==0)
		count++;
		if((AS+BS)%3==0)
		count++;
		if(count==0)
		{
			printf("FAKE LOVE\n");
		}
		else if(count==1)
		{
			printf("LOVE\n");
		}
		else if(count==2)
		{
			printf("TRUE LOVE\n");
		}
	}
	return 0;
}
