/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   vector<int> v;
    void help(TreeNode *root) {
        TreeNode *temp = root;
        stack<TreeNode *> st;
        while(temp != NULL || st.empty() == false) {
            while(temp != NULL) {
                st.push(temp);
                temp=temp->left;
            }
            v.push_back(st.top()->val);
            temp = st.top()->right;
            st.pop();
        }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        v.resize(0);
        help(root);
        return v;
    }
};