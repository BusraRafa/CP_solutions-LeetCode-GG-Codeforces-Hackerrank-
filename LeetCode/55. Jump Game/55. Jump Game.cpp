class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m=0;
	for(int i=0;i<nums.size();i++){
		if(m<i){
			return false;
		}
        m=max(m,nums[i]+i);
		
    }


/*class Solution {
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
};*/
