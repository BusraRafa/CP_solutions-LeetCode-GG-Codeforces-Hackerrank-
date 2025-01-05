class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string w,a;
        for(int i=0;i<s.size();i++){
        while(i<s.size() && s[i]!=' '){
            w.push_back(s[i]);
            i++;
            }
        //when s[i] == ' ' the next line reverse is running
         reverse(w.begin(),w.end());
       //chk not to add extra spaces or empty w
         if(w.size()>0){
         a=a+" "+w;
         w.clear();
         }
         
    }
    return a.substr(1);
       
    }
};
