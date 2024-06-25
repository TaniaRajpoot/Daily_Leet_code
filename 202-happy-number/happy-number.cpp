class Solution {
public:
   int squareSum(int n){
       int s = 0;
        while(n>0){
            int b = n%10;
            n /=10;
            s +=b*b;
        }
        return s;
   }
    bool isHappy(int n) {
     int slow = n;
     int fast = n;
     do{
        slow = squareSum(slow);
        fast = squareSum(squareSum(fast));
     } while(slow != fast);
     if(fast == 1)
        return  true ;
     else
        return false;
     }      
};