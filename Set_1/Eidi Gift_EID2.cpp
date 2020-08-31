#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a1,a2,a3,c1,c2,c3,flag=0,temp;
		cin>>a1>>a2>>a3>>c1>>c2>>c3;
		if(a1>a2 && c1<=c2 || a1<a2 && c1>=c2)	flag=1;
		if(a2>a3 && c2<=c3 || a2<a3 && c2>=c3)	flag=1;
		if(a1>a3 && c1<=c3 || a1<a3 && c1>=c3)	flag=1;
		if(a1==a2 && c1!=c2)flag=1;
		if(a2==a3 && c2!=c3)flag=1;
		if(a1==a3 && c1!=c3)flag=1;
		if(flag==1)
			cout<<"NOT FAIR\n";
		else cout<<"FAIR\n";	
	}
	return 0;
}
