#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		float A;
		float angle;
		cin>>A;
		angle = 360/(180-A);
		if(angle==(int)angle)
			cout<<"YES\n";
		else cout<<"NO\n";		
	}	
	return 0;
}
