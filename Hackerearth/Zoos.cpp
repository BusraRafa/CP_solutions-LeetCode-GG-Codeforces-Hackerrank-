#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int n=s.length()/2;
	int c=0,c1=0,i=0;
	if(s.length()<=20){
	for(int i=0;i<n;i++){
		if(s[i]=='z'){
			c+=1;
		}
	}
	while(s[s.length()-i-1]!='z'){
		if(s[s.length()-i-1]=='o'){
			c1+=1;
			i++;
		}
	}
	if(2*c!=c1){
		cout<<"No";
	}else
		cout<<"Yes";
	}
	return 0;
}
