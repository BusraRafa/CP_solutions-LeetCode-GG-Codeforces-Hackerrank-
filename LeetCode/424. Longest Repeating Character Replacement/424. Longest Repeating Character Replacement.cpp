class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,mlen=0,mf=0,change=0;
        vector<int>hash(26,0);
        while(r<s.size()){
            hash[s[r]-'A']=hash[s[r]-'A']+1; 
            mf=max(mf,hash[s[r]-'A']);
            change=(r-l+1)-mf;
            if(change >k){
                hash[s[l]-'A']=hash[s[l]-'A']-1;
                l++;
            }
           if(change <=k){
            mlen=max(mlen,r-l+1);
           }  
            r++; 
    }
        return mlen;
    }
};
