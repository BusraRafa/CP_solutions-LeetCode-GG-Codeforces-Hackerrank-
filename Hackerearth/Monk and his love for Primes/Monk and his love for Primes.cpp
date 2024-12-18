#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int sum=0,b;
	for(int i=0;i<s.length();i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=s[i]+32;//small
			b=(int)s[i];
			sum=sum-b;
			
		}
		
		else if(s[i]>='a' && s[i]<='z'){
			s[i]=s[i]-32;//big
			b=(int)s[i];
			sum=sum+b;
			
		}
		
	}
	sum=abs(sum);
	int f=0;
	//chk prime
	if(sum==0 || sum==1){
		cout<<0;
		return 0;
	}
	for(int i=2;i<sum/2;i++){
		if(sum%i==0){
			 f=1;
			cout<<0;
			break;
		}

	}
	if(f==0){
		cout<<1;
	}
	

}
