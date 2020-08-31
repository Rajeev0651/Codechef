#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char x;
		cin>>x;
		switch(x)
		{
			case 'b' : 
			case 'B' : cout<<"BattleShip\n";break;
			case 'c' : 
			case 'C' : cout<<"Cruiser\n";break;
			case 'd' : 
			case 'D' : cout<<"Destroyer\n";break;
			case 'F' :
			case 'f' : cout<<"Frigate\n";break;	
		}
	}
	return 0;
}
