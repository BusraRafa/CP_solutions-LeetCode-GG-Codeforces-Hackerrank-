class Solution {
public:
 int f(vector<int>& nums, int goal){
        int l=0,r=0,mlen=0,sum=0,count=0;
         if(goal<0) return 0;
        while(r<nums.size()){
            sum=sum+nums[r];
           while(sum>goal){
            sum=sum-nums[l];
            l++;
           }
            count=count+(r-l+1);
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return f(nums,goal)-f(nums,goal-1);
    }
};
/*
class Solution {
public:
    int lessThanEqualTo(vector<int>& nums, int goal) {
        if(goal < 0) return 0;
        int left = 0, right = 0, maxCnt = 0, sum = 0;
        while(right < nums.size()) {
            sum += nums[right];
            while(sum > goal) {
                sum -= nums[left];
                left++;
            }
            if(sum <= goal) {
                maxCnt += (right - left + 1);
            }
            right++;
        }
        return maxCnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lessThanEqualTo(nums,goal) - lessThanEqualTo(nums,goal-1);
        for(int i=0; i<nums.size(); i++) {
            int sum = 0;
            for(int j=i; j<nums.size(); j++) {
                sum = sum + nums[j];
                if(sum == goal) subArrCnt++;
                else if(sum > goal) break;
            }
        }
    
    }
};
*/
       
