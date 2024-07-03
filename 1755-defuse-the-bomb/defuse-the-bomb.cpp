class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n,0);

        if(k == 0)  return res;

        for (int i =0; i<n ;i++){
            int sum =0;
            int count  = k;  //size of window
            int j =0;

            if(k > 0){
                int j = i+1;
                while( count >0){
                    
                    sum += code[j%n];
                    j++;
                    count--;

                }
            }else if(k <0){
                  if(i == 0){
                        j = n-1;
                    }else{
                        j = i-1;
                    }
                while(count <0){
                    sum += code[j];
                    if(j == 0) j = n-1;
                    else j --;
                    count++;
                }
            }
            res[i] = sum;

        }
        return res;
    }
};