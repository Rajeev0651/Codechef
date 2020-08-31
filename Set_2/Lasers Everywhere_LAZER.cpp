#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct Point 
{
    ll x; 
    ll y; 
}; 
bool onSegment(Point p, Point q, Point r) 
{ 
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && 
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y)) 
       return true; 
    return false; 
}  
ll orientation(Point p, Point q, Point r) 
{ 
    ll val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y); 
    if (val == 0) return 0;
    return (val > 0)? 1: 2;
} 
bool doIntersect(Point p1, Point q1, Point p2, Point q2) 
{
    ll o1 = orientation(p1, q1, p2); 
    ll o2 = orientation(p1, q1, q2); 
    ll o3 = orientation(p2, q2, p1); 
    ll o4 = orientation(p2, q2, q1); 
    if (o1 != o2 && o3 != o4) return true; 
    if (o1 == 0 && onSegment(p1, p2, q1)) return true; 
    if (o2 == 0 && onSegment(p1, q2, q1)) return true; 
    if (o3 == 0 && onSegment(p2, p1, q2)) return true; 
    if (o4 == 0 && onSegment(p2, q1, q2)) return true; 
    return false;
}
int main()
{
	struct Point p1,p2,start,end;
	int T;
	cin>>T;
	while(T--)
	{
		ll N,Q,c,count=0;
		cin>>N>>Q;
		ll Px[N+2],Py[N+2],Qx1[Q+2],Qx2[Q+2],Qy[Q+2];
		for(int i=1; i<=N; i++)
		{
			cin>>c;
			Px[i] = i;
			Py[i] = c;
		}
		for(int i=1; i<=Q; i++)
		{
			cin>>Qx1[i]>>Qx2[i]>>Qy[i];
		}	
		for(int i=1; i<=Q; i++)
		{
			count=0;
			start = {Qx1[i],Qy[i]};
			end   = {Qx2[i],Qy[i]};
			for(int j=1; j<N; j++)
			{
				p1 = {Px[j],Py[j]};
				p2 = {Px[j+1],Py[j+1]};
				if(((Qx2[i]==Px[j])&& (Qy[i]==Py[j])) || ((Qx1[i]==Px[j+1])&& (Qy[i]==Py[j+1]))) 
					continue;	
				if(doIntersect(p1,p2,start,end)==1)
					count++;		
			}
			cout<<count<<"\n";
		}
	}
	return 0;
}
