class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        int len1=string1.length();//input
        int len2=string2.length();
        string temp="";
        for(int i=0;i<len2;i++){
   // while(int j!=len1){}
    for(int j=0;j<len1;j++){
        //cout<<s1[j]<<endl;
        if(string2[i]==string1[j]){
            string1[j]='@';
        }
    }
    
    
}

for(int i=0;i<len1;i++){
if((string1[i]>='a'& string1[i]<='z') | (string1[i]>='A'& string1[i]<='Z' )){
    temp=temp+string1[i];
}
}
string1=temp;

return string2,string1;
    }
};
