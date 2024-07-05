class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //two pointers approch 

        // int n = nums.size();
        // int count = 0;  


        // for (int i=0; i<n; i++){
        //     int sum =0;
        //     sum += nums[i];

        //     if(sum == k){
        //         count +=1;
        //         continue;
        //     }
        //     for (int j =i+1; j<n; j++){
        //         sum += nums[j];
        //         if (sum == k){
        //             count +=1;

        //         }
        //     }
        // }
        // return count;

    unordered_map<int,int> mp;
    int sum =0; 
    int count =0;
    mp[sum] =1;
    for(int num :nums ){
     sum += num;
     int diff = sum-k;
     count += mp[diff] ;
     mp[sum]++;
    }
    return count;
    }
};