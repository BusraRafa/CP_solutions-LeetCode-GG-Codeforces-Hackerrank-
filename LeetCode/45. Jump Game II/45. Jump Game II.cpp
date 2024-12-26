class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=0,j=0,m=0;;
        while(r<nums.size()-1){
            
            for(int i=l;i<=r;i++){
                m=max(m,i+nums[i]);
            }
                l=r+1;
                r=m;
                j+=1;
            
        }
       return j;
    
    }
};
