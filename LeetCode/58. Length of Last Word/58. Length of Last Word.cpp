class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,sp=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
            count=count+1;
            }
            else if(s[i]==' ' && count!=0 ){
                break;
            }
        }
        return count;
    }
};
