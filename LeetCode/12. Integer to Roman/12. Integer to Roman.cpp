class Solution {
public:
    string intToRoman(int num) {
        vector<int> key{1,4,5,9,10,40,50,90,100,400,500,900,1000};
        vector<string> value{"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int t=0;
        string s;
        for(int i=key.size()-1;i>=0;i--){
            if(num==0){
                break;
            }
            t=num/key[i];
            for(int j=0;j<t;j++){
                s=s+value[i];
            }
            num=num%key[i];
        }
    return s;
    }
};
