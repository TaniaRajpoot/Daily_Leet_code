class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;
        unordered_set <char> store;

        for(auto i:jewels){
            store.insert(i);
        }

       for (char it : stones) {
        if (store.count(it)) { // O(1) lookup
            count++;
        }
         
    
    }
    return count;
    }
};