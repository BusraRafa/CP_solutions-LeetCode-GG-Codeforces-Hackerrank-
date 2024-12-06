#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
    
	while(t--){
       int n;
       cin>>n;
        int len=(n*2)-1;
        for(int i=0;i<n;i++){
            for(int k=0;k<i+1;k++){
                cout<<"*";
        }
                for(int j=i+1;j<n;j++){
                    cout<<"#";
                }
//other half
                for(int k=n;k<len-i;k++){
                cout<<"#";
        }
                for(int j=len-1;j>=len-i-1;j--){
                    cout<<"*";
                }
                
        cout<<endl;
        }

cout<<endl;
      
	}
}