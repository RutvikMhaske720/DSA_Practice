class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() < 3) return -1;

        vector<int> temp = {nums[0], nums[1], nums[2]};
        sort(temp.begin(), temp.end());

        return temp[1];
    }
};