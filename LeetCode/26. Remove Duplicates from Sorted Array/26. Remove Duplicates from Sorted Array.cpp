class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        int k=0;
        for(int i=0;i<nums.size();i++){
		    s.insert(nums[i]);
	}
    for(auto i:s){
		nums[k]=i;
        k++;
	}


	return k;

    }
};
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
*/
