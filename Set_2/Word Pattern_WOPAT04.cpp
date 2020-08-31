#include<bits/stdc++.h>
using namespace std;

int main(){
	char str[21];
	cin >> str;
	for(int i=0;i<strlen(str);i++){
		for(int j=0;j<=i;j++){
			cout << str[j];
		}
		cout << "\n";
	}
		for(int i=strlen(str)-2;i>=0;i--){
		for(int j=0;j<=i;j++){
			cout << str[j];
		}
		cout << "\n";
	}
	
	return 0;
}
