#include<bits/stdc++.h>

using namespace std;

int main() {
    int N=0;
	cin>>N;
    vector <int> A(N);
    int m=0,n;
    for(int i=0;i<N;i++){
    cin>>A[i];
        }
    for(int i=0;i<N;i++){
        A[i]=A[i]%10;     
    }
 if(A[N-1]%10==0){
       cout<<"Yes";
    }else { 
   cout<<"No"; 
     }
    return 0;
}
