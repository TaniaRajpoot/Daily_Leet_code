class Solution {
public:
    double average(vector<int>& salary) {
        double ans = 0;
        int n =  salary.size()-2;
        sort(salary.begin(), salary.end());
        for (int i = 1; i<salary.size()-1; i++){
            ans += salary[i];
        }
        ans =ans/n;
        return ans;

        
    }
};