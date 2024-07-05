// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans =-1;
        int s =1;
        int e = n;
        while(s<=e){
            int m = s+(e-s)/2;
            if(isBadVersion(m) == false ){

            
            s = m+1;

        }else{
            ans = m;
            e =m-1;

        }
        }
        return ans;
    }
};