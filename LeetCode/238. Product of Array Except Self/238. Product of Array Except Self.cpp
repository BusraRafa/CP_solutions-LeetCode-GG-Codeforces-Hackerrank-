//****************withOUT Space complexity ****************
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        long long mul=1;
        prefix[0]=1;
        for(int i=1;i<nums.size();i++){
        prefix[i]= prefix[i-1] *nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
         mul=nums[i+1]*mul;
        prefix[i]=prefix[i]*mul;
        }
        return prefix;
    }
};
//****************with Space complexity****************
/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> sufix(nums.size());
        vector<int> v(nums.size());
        //1 2 3 4 
        prefix[0]=1;
        for(int i=1;i<nums.size();i++){
        prefix[i]= prefix[i-1] *nums[i-1];
        }
        sufix[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--){
        sufix[i]=sufix[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            v[i]=prefix[i]*sufix[i];
        }
        return v;
    }
};
*/
