class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int n2=nums2.size();
      if(n2!=0){
       for(int i=0;i<n2;i++){
        nums1[m+i]=nums2[i];
       }
    }
        sort(nums1.begin(),nums1.end());
       
        
    }
};

