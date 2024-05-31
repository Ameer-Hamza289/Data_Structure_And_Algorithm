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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arrLeft;
        vector<int> arrRight;
        vector<int> arr;
        if(!root) return {};
        arrLeft=inorderTraversal(root->left);
        arr.insert(arr.end(), arrLeft.begin(), arrLeft.end());
        arr.push_back(root->val);
        arrRight=inorderTraversal(root->right);
        arr.insert(arr.end(), arrRight.begin(), arrRight.end());
       
        return arr;
    }
};