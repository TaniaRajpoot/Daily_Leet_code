class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int f = 0;
        int s = 0;

        for (f =0; f<nums.size();f++){
            if(nums[f] != 0){
                swap(nums[f],nums[s]);
                s++;
            }
        }

    }
};