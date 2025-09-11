

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i = 0; // even index
        int j = 1; // odd index

        while (i < n && j < n) {
            if (nums[i] % 2 == 0) {
                i += 2; // correct place for even number
            } else if (nums[j] % 2 == 1) {
                j += 2; // correct place for odd number
            } else {
                // wrong places -> swap
                swap(nums[i], nums[j]);
                i += 2;
                j += 2;
            }
        }

        return nums;
    }
};