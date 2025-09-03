class Solution {
public:
    bool rotateString(string s, string goal) {

       string t = s+ s;
       if(s.length() != goal.length()) return false;

       return t.find(goal) != string ::npos;

    }
};