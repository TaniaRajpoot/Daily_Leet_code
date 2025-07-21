class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // string doublestring = s+s;
        // int n = s.length();

        // for(int i = 1; i<n;i++){
        //     string segment = doublestring.substr(i,n);
        //     if(segment == s){
        //         return true;
        //     }
           
        // }
        //  return false;

        string ss = s + s;
        ss.erase(ss.length() - 1);
        return ss.find(s, 1) < s.size();
    }
};