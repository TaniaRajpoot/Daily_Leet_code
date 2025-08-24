class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> result;
     

       for (int i = 0; i < nums.size(); i++) {
    int r = i + 1;
    while (r < nums.size()) {   
        if (nums[i] + nums[r] == target) {
             result = {i, r};
            return result;
        }
        r++;
    }
}
        return result;
    }
};