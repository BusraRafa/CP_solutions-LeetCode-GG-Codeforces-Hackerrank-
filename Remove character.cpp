#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string removeChars(string string1, string string2) {
        int len1=string1.length();
        int len2=string2.length();
        string temp="";
        for(int i=0;i<len2;i++){
    for(int j=0;j<len1;j++){
        if(string2[i]==string1[j]){
            string1[j]='@';
        }
    }     
}
for(int i=0;i<len1;i++){
if((string1[i]>='a'& string1[i]<='z') | (string1[i]>='A'& string1[i]<='Z' )){
    temp.push_back(string1[i]);
}
}
//string1=temp;

return string2,temp;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
