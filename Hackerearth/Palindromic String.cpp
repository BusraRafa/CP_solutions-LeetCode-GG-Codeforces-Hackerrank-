#include<bits/stdc++.h>
using namespace std;
int main(){
	
string s;
cin>>s;
bool f=true;

int n=(s.length()/2);

for (int i=0;i<n;i++)
  {
	if(s[i]!=s[s.length()-i-1])
		{f=false;
		break;}
	}
   if(f==true){
	cout<<"YES";
   }else
   cout<<"NO";
   }

