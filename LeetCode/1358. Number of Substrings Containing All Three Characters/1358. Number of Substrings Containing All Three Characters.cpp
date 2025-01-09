class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        vector<int> lastchar(3,-1);
        for(int i=0;i<s.size();i++){
          lastchar[s[i]-'a']=i;
           if(lastchar[0]!=-1 && lastchar[1]!=-1 && lastchar[2]!=-1){
              count=count+(1+min({lastchar[0], lastchar[1],lastchar[2]}));
               // count=count+(1+min(min(lastchar[0], lastchar[1]),lastchar[2]));
           } 
        }
        return count;
    }
};
/*
    int count=0;
    vector<int> lastchar(3,-1);
    for(int i=0;i<s.size();i++){
       // lastchar[s[i]-'b']=i;
        if(s[i]=='b'){lastchar[0]=i;}
        else if(s[i]=='f'){lastchar[1]=i;}
        else if(s[i]=='g'){lastchar[2]=i;}
        if(lastchar[0]!=-1 && lastchar[1]!=-1 && lastchar[2]!=-1 ){
        count=count+(1+min({lastchar[0],lastchar[1],lastchar[2]}));
        }
    }
    cout<<count;
}
*/
