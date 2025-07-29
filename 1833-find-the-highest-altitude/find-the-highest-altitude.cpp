class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high_alt= 0;
        int curr_alt= 0;

        for (int i=0;i<gain.size(); i++){
            curr_alt += gain[i];

            if(curr_alt >high_alt){
                high_alt = curr_alt;
            }
        }
        return high_alt;
    }
};