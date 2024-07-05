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
    int n =arr.size();
   int l =0;
   int r=n-1;
   while(l<r){
    int mid = l+(r-l)/2;
    if(arr[mid]<arr[mid+1]){
        l = mid +1;
    }else{
        r =mid;
    }

   }
   return l;
    }
};