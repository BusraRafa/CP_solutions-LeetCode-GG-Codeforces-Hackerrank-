#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>a{3,6,12,33,11,16,7,10,15};
    sort(a.begin(),a.end()); 
    int b=10,l=0,r=a.size()-1;
while(l<=r){
    int mid=(l+r)/2;
    if(b>a[mid]){
       l=mid+1; 
    }
    else if(b<a[mid]){
     r=mid-1; 
    }
   else if(b==a[mid]){
    cout<<mid;
    return 0;
    }
  }
  cout<<"not found";
  return 0;
}
