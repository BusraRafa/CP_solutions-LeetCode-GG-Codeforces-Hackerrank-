class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,mlen=0,zero=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zero=zero+1;
            }
            if(zero>k){ 
                if(nums[l]==0){
                   zero=zero-1;
                  }    
                l++;
              }
            if(zero<=k){
            mlen=max(mlen,r-l+1);
            }
           r++;
        }
        return mlen;
    }
};
