class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n=nums.size();
     unordered_map<int,int> mp;
     for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if(nums[i]+ nums[j] == target){
                return {i,j};
            }
        }
        
            for(int i=0; i<nums.size(); i++){
                int comp = target - nums[i];
                if(mp.find(comp) != mp.end()){
                   return{mp[comp], i};
                }
            }
            mp[nums[i]] = i;
        }
            return {};

        } 
    
             
};