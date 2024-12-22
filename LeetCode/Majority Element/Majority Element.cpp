class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<long,long>mp;
      int n=nums.size()/2;
      for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
      }
        for(auto i:mp){
            if(i.second>n)
            return i.first;
        }
        return 0;
    }
};
