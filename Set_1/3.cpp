#include <bits/stdc++.h> 
using namespace std; 
int res[5][5]={0};
int FindMin(int inputArray[5][5], int n, bool rowVisited[], bool colVisited[], int target)
{
	int minm = INT_MAX;
	int rowIndex=0, colIndex=0;
	for(int i=0; i<4; i++)
	{	if(!colVisited[i] && inputArray[target][i]<minm)
		{	minm=inputArray[target][i];
            colIndex=i;
        }
	}
    minm = INT_MAX;
    for(int i=0;i<4;i++)
	{	if(!rowVisited[i] && inputArray[i][colIndex]<minm)
		{	minm=inputArray[i][colIndex];
            rowIndex=i;
        }
    }
	if(rowIndex==target)
		return colIndex;
	else
		return -1;	
}
int findMiniumCost(int inputArray[5][5], int n)
{
	bool rowVisited[5]={0};	
	bool colVisited[5]={0};
	list<int> myqueue{};
	for(int i=0; i<4; i++)
	{
		myqueue.push_back(i);
	}
	int sum=0;
	while(!myqueue.empty())
	{
		int target = myqueue.front();
		myqueue.pop_front();
		int minm = FindMin(inputArray,4,rowVisited,colVisited,target);
		if(minm==-1)
		{
			myqueue.push_back(target);
		}	
		else
		{
		//	cout<<"Assign job "<<minm<<" to "<<target<<"\n";
			res[target][minm] = 1;
			rowVisited[target]=true;
	        colVisited[minm]=true;
            sum+=inputArray[target][minm];	
		}	
	}
	return sum;
}
int main()
{
	int T,sum=0;
	cin>>T;
	while(T--)
	{
		int X,day,ax=0,ans[5]={0};
		char mov;
		cin>>X;
		int M[5][5];
		for(int i=0; i<4; i++)
		{	for(int j=0; j<4; j++)
			{
				cin>>M[i][j];
				M[i][j]*=-1;
		//		M[i][j]=0;
				res[i][j]=0;
			}
		}/*
		for(int i=0; i<X; i++)
		{
			cin>>mov>>day;
			switch(day)
			{
				case 3 : day = 1;break;
				case 6 : day = 2;break;
				case 9 : day = 3;break;
				case 12 : day = 4;break;
			}
			M[mov-65][day-1]++;
		}
		for(int i=0; i<4; i++)
		{
			for(int j=0; j<4; j++)
			{
				M[i][j]*=-1;
		//		cout<<M[i][j]<<" ";	
			}
		//	cout<<"\n";	
		}*/
		cout<<"\n";
		int max_flow = findMiniumCost(M,4);
		int l=0,k=0,rup=125,minus=0;
		for(int i=0; i<4; i++)
		{
			for(int j=0; j<4; j++)
			{
				cout<<res[i][j]<<" ";
				if(res[i][j]!=0 && M[i][j]!=0 )
				{
					ans[l++] = M[i][j]*-1;
				}
			}
			cout<<"\n";
		}
		cout<<"\n";
		sort(ans,ans+l, greater<int>());
		for(int i=0; i<4; i++)
		{
			cout<<ans[i]<<" ";
			if(ans[i]==0)
				minus+=100;	
		}
		cout<<"\n";	
		for(int i=0; i<4; i++)
		{	
			rup-=25;
			ax+= (ans[i]*rup);
		}
		cout<<ax-minus<<"\n";
		sum+=ax-minus;
	}
	cout<<sum<<"\n";
	return 0;
}
