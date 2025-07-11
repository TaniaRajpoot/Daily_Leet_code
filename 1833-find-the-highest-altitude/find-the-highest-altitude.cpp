class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int curr_alt = 0;
        int maxAltitude = 0;

       for(int i=0;i<gain.size();i++){
        curr_alt += gain[i];

        if(curr_alt >maxAltitude){
            maxAltitude = curr_alt;
        }
     }
     return maxAltitude;

    }
};