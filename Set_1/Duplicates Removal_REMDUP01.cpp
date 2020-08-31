#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[21];
	cin >> s;
	int arr[27] = {0};
	int len = strlen(s);
	int k=0;
	char ans[21];
	for(int i=0;i<len;i++){
		if(arr[(s[i] - 'a')] == 0){
			ans[k++] = s[i];
		}
		arr[(s[i] - 'a')] = 1;
	}
	ans[k]='\0';
	cout << ans << "\n";
	return 0;
}
