class Solution {
public:
    bool checkRecord(string s) {
        int A=0,L=0;
       for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            A++;
        }
        else if (s[i] == 'L' && i + 2 < s.length() && s[i+1] == 'L' && s[i+2] == 'L'){
            L=L+3;;
            i=i+2;
        }
       }
       if(A>1| L>=3){
        return false;
       }
       else
        return true;
         
    
    }
};
