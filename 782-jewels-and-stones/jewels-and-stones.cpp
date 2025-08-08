class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;
        unordered_set <char> store;

        for(auto i:jewels){
            store.insert(i);
        }

       for (char s : stones) {
        if (store.count(s)) { // O(1) lookup
            count++;
        }
         
    
    }
    return count;
    }
};