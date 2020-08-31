#include<bits/stdc++.h>
using namespace std;
int check(int X, int Y, int x1, int y1, char d)
{
	float val,x,y;
	x = X; y = Y;
	if(d=='x')
	{
		val = ((x*x1)/y)+y1;
		cout<<val<<"\n";
	}
	else
	{
		val = ((y*y1)/x)+x1;
		cout<<val<<"\n";
	}
//	cout<<val<<" "<<X<<" "<<Y<<"\n";
	if(abs(val-int(val))>0.0000001)
		return 0;
	return val;	
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N,M,xp=0,xn=0,yp=0,yn=0,ans=0,point,flag=0;
		bool q=false;
		cin>>N>>M;
		int X[N],Y[M];
		for(int i=0; i<N; i++)
		{
			cin>>X[i];
			if(X[i]==0)	flag=1;
			if(X[i]>0)
				xp++;
			else if(X[i]<0)
				xn++;		
		}
		for(int i=0; i<M; i++)
		{
			cin>>Y[i];
			if(Y[i]==0)	flag=1;
			if(Y[i]>0)
				yp++;
			else if(Y[i]<0)
				yn++;		
		}
		sort(X,X+N);
		sort(Y,Y+M);
		int XP[xp],XN[xn],YP[yp],YN[yn];
		int pos1=0,pos2=0;
		for(int i=0; i<N; i++)
		{
			if(X[i]>0)
				XP[pos1++] = X[i];
			if(X[i]<0)
				XN[pos2++] = X[i];		
		}
		pos1=0; 
		pos2=0;
		for(int i=0; i<M; i++)
		{
			if(Y[i]>0)
				YP[pos1++] = Y[i];
			if(Y[i]<0)
				YN[pos2++] = Y[i];		
		}
		for(int i=0; i<yn; i++)
		{
			for(int j=0; j<xn; j++)
			{
				point = check(XN[j],-YN[i],XN[j],0,'x');
				if(point!=0)
				{
					q = binary_search(YP,YP+yp,point);
					if(q==true)
					{
						ans++;
						break;
					//	cout<<XN[j]<<" "<<YN[i]<<" "<<point<<"\n";		
					}
				}	
			}
		}
		q = false;
		for(int i=0; i<xn; i++)
		{
			for(int j=0; j<yp; j++)
			{
				point = check(-XN[i],YP[j],0,YP[j],'y');
				if(point!=0)
				{
					q = binary_search(XP,XP+xp,point);
					if(q==true)
					{
						ans++;
						break;
					//	cout<<XN[i]<<" "<<YP[j]<<" "<<point<<"\n";		
					}	
				}	
			}
		}
		q = false;
		for(int i=0; i<yp; i++)
		{
			for(int j=0; j<xp; j++)
			{
				point = check(XP[j],-YP[i],XP[j],0,'x');
				if(point!=0)
				{
					q = binary_search(YN,YN+yn,point);
					if(q==true)
					{
						ans++;
						break;
					//	cout<<XP[j]<<" "<<YP[i]<<" "<<point<<"\n";		
					}	
				}	
			}
		}
		q = false;
		for(int i=0; i<xp; i++)
		{
			for(int j=0; j<yn; j++)
			{
				point = check(-XN[j],YN[i],0,Y[N],'y');
				if(point!=0)
				{
					q = binary_search(YP,YP+yp,point);
					if(q==true)
					{
						ans++;
						break;
					//	cout<<XN[j]<<" "<<YN[i]<<" "<<point<<"\n";		
					}	
				}	
			}
		}
		if(flag==1)
		{
			ans = ans+(xp*yp)+(xn*yp)+(xn*yn)+(xp*yn);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
