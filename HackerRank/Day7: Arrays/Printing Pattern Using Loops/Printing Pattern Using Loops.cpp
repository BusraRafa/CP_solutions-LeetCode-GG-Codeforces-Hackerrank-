#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int len=(n*2-1);
    int s=0,e=len-1,a[len][len];
    while(n!=0){
    for(int i=s;i<=e;i++){
        for(int j=s;j<=e;j++){
                if(i==s |  j==e |i==e | j==s){
                a[i][j]=n;
            } 
            
            } 

        }
        s++,e--,n--;
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
       
            
        }

      

