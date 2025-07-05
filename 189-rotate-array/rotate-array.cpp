class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // In case k > n
        vector<int> result(n);

        for(int i = 0; i < n; i++) {
            int newIndex = (i + k) % n;
            result[newIndex] = nums[i];  // Place the element at its new position
        }

        nums = result;  // Copy back to original array
    }
};
