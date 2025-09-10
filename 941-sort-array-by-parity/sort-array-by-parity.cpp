class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int j=n-1;
        int i=0;
        while(i<j){
            if(nums[i]%2>nums[j]%2){
                swap(nums[i],nums[j]);}
            else if(nums[i]%2==0){
                i++;
                
            }else if(nums[j]%2==1){
                j--;
            }
        }
        return nums;
    }
};