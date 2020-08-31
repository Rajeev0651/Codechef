#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char s[1000],prev='p';
		int x=0,y=0,n;
		cin>>n>>s;
		for(int i=0; i<strlen(s); i++)
		{
			if(s[i]=='R'|| s[i]=='L')
			{
				if(prev!='R' && prev!='L')
				{
					switch(s[i])
					{
						case 'L' : x--;break;
						case 'R' : x++;break;
						case 'U' : y++;break;
						case 'D' : y--;break;
						default : break;	
					}	
				}
				prev=s[i];	
			}
			if(s[i]=='U'|| s[i]=='D')
			{
				if(prev!='U' && prev!='D')
				{
					switch(s[i])
					{
						case 'L' : x--;break;
						case 'R' : x++;break;
						case 'U' : y++;break;
						case 'D' : y--;break;
						default : break;	
					}	
				}
				prev=s[i];	
			}	
		}
		cout<<x<<" "<<y<<"\n";
	}
	return 0;
}
