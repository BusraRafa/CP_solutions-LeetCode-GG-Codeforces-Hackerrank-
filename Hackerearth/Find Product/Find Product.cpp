#include <bits/stdc++.h>
using namespace std;
int main() {
	int N,p=1;
	const int m=(1e9+7);
	cin >> N;
	int A[N];
	for(int i=0;i<N;i++){
	cin>>A[i];
	}
		for(int i=0;i<N;i++){
			p=(1LL*p*A[i])%m;
		}
		cout<<p;
 
}
