class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1 || numRows>=s.size()){
            return s;
        }
        string z="";
        vector<string>v(numRows);
        int i=0;
        while(i<s.size()){
        for(int j=0;j<numRows && i<s.size();j++){
            v[j].push_back(s[i]);
            i++;
        }
        for(int j=numRows-2;j>=1 && i<s.size();j--){
            v[j].push_back(s[i]);
            i++;
        }
      }
      for(auto i:v){
        z=z+i;
      }
      return z;
    }
};
