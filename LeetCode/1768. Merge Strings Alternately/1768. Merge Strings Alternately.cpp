class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     string m;
        for(int i=0;i<max(word1.size(),word2.size());i++){
            if(i<=word1.size()-1){
                m.push_back(word1[i]);
            }
            if(i<=word2.size()-1){
            m.push_back(word2[i]);
            }
        }
        return m;
    }
};
/*
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        long long w1=word1.size(),w2=word2.size();
        string m;
        if(w1<w2){
            for(int i=0;i<w1;i++){
               m.push_back(word1[i]);
               m.push_back(word2[i]);
            }
            for(int i=w1;i<w2;i++){
               m.push_back(word2[i]);
            }
            return m;
        }
        else if(w1==w2) {
            for(int i=0;i<w1;i++){
               m.push_back(word1[i]);
               m.push_back(word2[i]);
            }
            return m;
        }
        else{
            for(int i=0;i<w2;i++){
               m.push_back(word1[i]);
               m.push_back(word2[i]);
            }
            for(int i=w2;i<w1;i++){
              m.push_back(word1[i]);
            }
            return m;
        }  
    }
};
*/
