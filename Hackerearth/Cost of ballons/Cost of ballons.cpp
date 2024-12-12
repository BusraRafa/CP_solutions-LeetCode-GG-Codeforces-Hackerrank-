#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int t;
	cin >> t;   
	while(t--){
		int g,p,sum1=0,sum2=0;
		cin>>g>>p;
		if(t%2==0){
			swap(g,p);
		}
		int n;
		cin>>n;
		vector<vector<int>> arr(n, vector<int>(2));
		for(int i=0;i<n;i++){
			for(int j=0;j<2;j++){
				cin>>arr[i][j];
			}
		}
		
		for(int i=0;i<1;i++){
			for(int j=0;j<n;j++){
				sum1=arr[j][i]+sum1;
			}
		}
		for(int i=1;i<2;i++){
			for(int j=0;j<n;j++){
				sum2=arr[j][i]+sum2;
			}
		}
		int total=(sum1*g)+(sum2*p);
	cout<<total<<endl;
	}	// Writing output to STDOUT
}
