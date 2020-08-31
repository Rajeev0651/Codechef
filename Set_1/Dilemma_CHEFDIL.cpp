#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char S[100000];
		scanf("%s",S);
		int no=0;
		for(int i=0; i<strlen(S); i++)
		{
			if(S[i]=='1')
				no++;
		}
		if(no%2==1)
			cout<<"WIN"<<"\n";
		else 	
			cout<<"LOSE"<<"\n";	
	}
	return 0;
}
