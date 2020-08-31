#include<bits/stdc++.h>
using namespace std;
long int M = 1000000007;
long long int mod(string num, long long int a) 
{  
    long long int res = 0;  
    for (long int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
    return res; 
}
string Sum(string str1, string str2) 
{ 
    if (str1.length() > str2.length()) 
        swap(str1, str2);  
    string str = "";  
    int n1 = str1.length(), n2 = str2.length(); 
    int diff = n2 - n1;  
    int carry = 0;  
    for (int i=n1-1; i>=0; i--) 
    {
        int sum = ((str1[i]-'0') + 
                   (str2[i+diff]-'0') + 
                   carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    for (int i=n2-n1-1; i>=0; i--) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    }  
    if (carry) 
        str.push_back(carry+'0');  
    reverse(str.begin(), str.end()); 
  
    return str; 
}
bool isSmaller(string str1, string str2) 
{  
    int n1 = str1.length(), n2 = str2.length(); 
  
    if (n1 < n2) 
        return true; 
    if (n2 > n1) 
        return false; 
    for (int i=0; i<n1; i++) 
    { 
        if (str1[i] < str2[i]) 
            return true; 
        else if (str1[i] > str2[i]) 
            return false; 
    } 
    return false; 
}
string findDiff(string str1, string str2) 
{ 
    if (isSmaller(str1, str2)) 
        swap(str1, str2);  
    string str = "";  
    int n1 = str1.length(), n2 = str2.length(); 
    int diff = n1 - n2;  
    int carry = 0;  
    for (int i=n2-1; i>=0; i--) 
    {  
        int sub = ((str1[i+diff]-'0') - 
                   (str2[i]-'0') - 
                   carry); 
        if (sub < 0) 
        { 
            sub = sub+10; 
            carry = 1; 
        } 
        else
            carry = 0; 
  
        str.push_back(sub + '0'); 
    }  
    for (int i=n1-n2-1; i>=0; i--) 
    { 
        if (str1[i]=='0' && carry) 
        { 
            str.push_back('9'); 
            continue; 
        } 
        int sub = ((str1[i]-'0') - carry); 
        if (i>0 || sub>0) 
            str.push_back(sub+'0'); 
        carry = 0; 
  
    }
    reverse(str.begin(), str.end()); 
    return str; 
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int sum=0,NL,L,NR,R,step;
		string S,temp;
		cin>>NL>>L>>NR>>R;
		step = findDiff()
		len = S.length();
		temp = S;
		for(long int i=0; i<len; i++)
		{	//	388,822,442
			if((i+1)!=len && S[i]==S[i+1])
			{
				temp[i+1] = '0';
			}
		}
		
		cout<<mod(S,107);
		cout<<findDiff(str1, str2);
		cout<<Sum(str1, str2);	
	}
	
	return 0;
}
