#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;   
	  cin >> t;
    while(t--) { 
 		int n, k,diff = 0,temp = 0;; 
        cin >> n >> k;     
		vector<int>arr(n);
        for(int i = 0; i < n; i++) {
		 cin >> arr[i];        
		 }
        for(int i = 0; i < n; i++) {
			  diff = k - arr[i]; 
			  if(diff > temp) {        
				 temp = diff;  }
		       }
        cout << temp << endl;    
			}
		}
