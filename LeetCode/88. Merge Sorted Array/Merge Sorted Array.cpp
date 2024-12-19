class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector<int>n1;
       for(int i=0;i<m;i++){
            n1.push_back(nums1[i]);
       }
       int n2=nums2.size();
       if(n2!=0){
        for(int i=0;i<n2;i++){
          n1.push_back(nums2[i]);  
        }
    }
        sort(n1.begin(),n1.end());
    }
};

