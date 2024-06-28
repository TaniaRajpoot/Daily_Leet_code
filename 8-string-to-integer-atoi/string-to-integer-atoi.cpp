class Solution {
    public :
    int myAtoi(string s) {
        if(s.length()==0) return 0;
        int i=0;
        //removing white spaces
        
         while(i<s.size() && s[i]== ' ') {
             i++;
         }     
        s = s.substr(i); //from i ---> last of string
        
        int sign = +1;
        long ans = 0;
        //checking the sign of integer 
        if(s[0] == '-') sign = -1;
        
        int MAX = INT_MAX, MIN = INT_MIN;
        i = (s[0] == '+' || s[0] == '-') ? 1 : 0; //traversal according to the sign 
		
        while(i < s.length()) {
            if(s[0] == ' ' || !isdigit(s[i])) break; //if we get non digit numer 
                                                       //can stop the traversal 

            //formula to make the integer                                          
            ans = ans * 10 + s[i]-'0';
            if(sign == -1 && -1*ans < MIN) return MIN;
            if(sign == 1 && ans > MAX) return MAX;
            
            i++;
        }
        
        return (int)(sign*ans);
    }
};