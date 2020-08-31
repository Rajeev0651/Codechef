#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		float timet,timeb,finish, distancetobolt, tigerAcc, boltspeed;
		cin>>finish>>distancetobolt>>tigerAcc>>boltspeed;
		timet = sqrt((2*(finish+distancetobolt))/tigerAcc);
		timeb = finish/boltspeed;
		if(timet<=timeb)
		{
			cout<<"Tiger\n";
		}
		else
			cout<<"Bolt\n";
	}
	return 0;
}
