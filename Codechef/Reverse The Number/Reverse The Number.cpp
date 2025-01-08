#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int n,r=0;
	    cin>>n;
	    while(n!=0)
	   { r=r*10+(n%10);
	    n=n/10;
	   }
	   cout<<r<<endl;
	}  
}    
	   

//3200%10=0
//3202%=2---3202/10=320---320%10=0---320/10=32
