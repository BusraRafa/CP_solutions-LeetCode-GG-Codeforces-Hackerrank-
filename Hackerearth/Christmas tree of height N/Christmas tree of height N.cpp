#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;										// Reading input from STDIN
	while(t--){
		int n;
		cin>>n;
		vector<vector<long long>>a;
		for(int i=0;i<n;i++){
			vector<long long>r(i+1);
			for(int j=0;j<=i;j++){
				if(j==0 || j==i){
					r[j]=1;
				}
				else{
					r[j]=a[i-1][j-1]+a[i-1][j];
				}

				cout<<r[j]<<" ";
			}
			a.push_back(r);
			cout<<endl;
		}
		cout<<endl;
	}		
}

