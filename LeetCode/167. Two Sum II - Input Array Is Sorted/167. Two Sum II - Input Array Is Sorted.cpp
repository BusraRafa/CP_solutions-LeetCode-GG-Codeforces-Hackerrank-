class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int l = 0, r = numbers.size() - 1, temp = 0;
        for (int i = 0; i < numbers.size() && l < numbers.size() && r >= 0;
             i++) {
            temp = numbers[l] + numbers[r];
            if (temp > target) {
                r = r - 1;
            } else if (temp < target) {
                l = l + 1;
            } else {
                v.push_back(l + 1);
                v.push_back(r + 1);
                return v;
            }
        }
        return {};
    }
};
