class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s,s1,s2;
        sort(strs.begin(),strs.end());
        s1=strs[0];
        s2=strs[strs.size()-1];
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                return s;
            }else{
                s.push_back(s1[i]);
            }
        }
        return s;
    }
};
