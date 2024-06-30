class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> ch;
        int n = s.length();
        string result = "";

        for(int i =0; i<n; i++){
            if(ch.empty() || ch.top() != s[i]){
                ch.push(s[i]);
            }else{
                ch.pop();
            }
        }
        while(!ch.empty()){
            result.push_back(ch.top());
            ch.pop();
        }

        //reverse
        reverse(result.begin(), result.end());

        return result;

    }
};