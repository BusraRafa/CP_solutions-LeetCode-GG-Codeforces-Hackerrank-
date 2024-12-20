class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int>n1;
       int k=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            n1.push_back(nums[i]);
            k++;
        }
       }
       for(int i=0;i<n1.size();i++){
        nums[i]=n1[i];
       }
       return k;
    }
};
//otherwise
/*class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int k=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
        }
       }
      
       return k;
    }
};
*/
