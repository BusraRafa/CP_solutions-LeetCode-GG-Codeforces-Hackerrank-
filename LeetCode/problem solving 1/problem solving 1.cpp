
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> notes{1000,500,100,50,10,5,1};
    int n;
    cout<<"enter amount: ";
    cin>>n;
   
    for(int i=0;i<notes.size();i++){
        int t=n/notes[i];
        if(t!=0){
        cout<<notes[i]<<" "<<t<<endl;
    }
        n=n % notes[i];
    }
}
	




