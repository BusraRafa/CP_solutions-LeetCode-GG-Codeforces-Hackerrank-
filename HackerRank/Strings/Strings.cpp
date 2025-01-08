#include <bits/stdc++.h>

using namespace std;

int main() {
    string a,b,con;
    char temp;
    cin>>a>>b;
    int len=a.length(), len2=b.length();
    cout<<len<<" "<<len2<<endl;
    con=a+b;
    cout<<con<<endl;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b;
}
