class Solution {
public:
    int minDeletions(string s) {
        //Approch 1-->using hash set
    //     int freq[26] = {0};

    //     for (char &ch:s){
    //         freq[ch-'a']++;
    //     }
    //     int result = 0;
    //     unordered_set<int>st;

    //     for(int i = 0; i < 26; i++){
    //         while(freq[i] > 0 && st.find(freq[i]) != st.end()){
    //             freq[i] -= 1;
    //             result++;
    //         }
    //         st.insert(freq[i]);
    //     }
    //  return result;

//approch 2 -->by sorting
         int freq[26] = {0};

        for (char &ch:s){
            freq[ch-'a']++;
        }

            sort(begin(freq), end(freq));
            int result =0;

            for(int i = 24 ; i>=0 && freq[i] >0 ; i--){
                if(freq[i] >= freq[i+1]){
                   int  prev = freq[i];

                   freq[i] = max(0 , freq[i+1]-1);
                   result += (prev - freq[i]);

                }
            }
            return result;

    }
};