
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		n=s.length();
		vector<int> s1;
		long long mul=0;
		for(int i=0;i<n;i++){
			s1.push_back(s[i]-'0');
		}
		for(int i=0;i<n;i++){
			mul=mul+(s1[i] *(long long)(pow(2,n-i-1)));
		}
		cout<<mul<<endl;
		
	}

}


