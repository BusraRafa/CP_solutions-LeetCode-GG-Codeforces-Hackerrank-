class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cur=nums[0];
        for(int i=1;i<nums.size();i++){
          if(cur!=0){
            cur=cur-1;
            cur=max(nums[i],cur);
          }else
          return false;
          
        } 
        return true;
    }
};
