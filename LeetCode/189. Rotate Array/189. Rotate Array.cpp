class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k = k %(nums.size());
        if(k==0)
        {return;}

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

 }
};
/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ar(nums.size());
        int j=0;
        k = k %(nums.size());
        if(k==0)
        {return;}
        for(int i=nums.size()-k;i<nums.size();i++){
        ar[j]=nums[i];
        j++;
        }
        int i=0;
        for(j;j<nums.size();j++){
        ar[j]=nums[i];
        i++;
        }
            nums=ar;

 }
};

*/
