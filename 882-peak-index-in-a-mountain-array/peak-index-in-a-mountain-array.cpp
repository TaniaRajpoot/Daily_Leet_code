class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    // int i =0;
    // int n = arr.size();
    //     while(i<n && arr[i]<arr[i+1]){
    //         i++;
    //     }
    //     return i;

    // }
    // //linear search 


    //log (n) wala lazmi binary search sy hi hoga 
   int i =0;
    int n =arr.size();
    while(i<n-1 && arr[i]<arr[i+1]){
        i++;
    }
return i;
    }
};