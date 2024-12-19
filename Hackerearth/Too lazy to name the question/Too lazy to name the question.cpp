#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int A,B,C;
	cin>>A>>B>>C;
	vector<long long>a;
	for(int i=1;i<=C;i++){
		a.push_back(A*i);
	}
	
	for(int i=1;i<=C;i++){
		a.push_back(B*i);	
	}
	sort(a.begin(),a.end());
	set<long long>s;
	s.insert(0);
	for(int i=0;i<a.size();i++){
		s.insert(a[i]);
	}
	vector<long long>b;
	for(auto it:s){
		b.push_back(it);
	}
	cout<<b[C]<<" ";
	if(b[C]%A==0 && b[C]%B==0){
		for(int i=C-1;i>0;i--){
			if(b[i]%A==0 && b[i]%B==0){
				cout<<b[i]<<" ";
			}
		}
		cout<<b[0];
	}
	else if(b[C]%A==0 && b[C]%B!=0){
		for(int i=C-1;i>0;i--){
			if(b[i]%A==0 && b[i]%B!=0){
				cout<<b[i]<<" ";
			}
		}
		cout<<b[0];
	}
	else if(b[C]%A!=0 && b[C]%B==0){
		for(int i=C-1;i>0;i--){
			if(b[i]%A!=0 && b[i]%B==0){
				cout<<b[i]<<" ";
			}
		}
		cout<<b[0];
	}
	
		
}
 
