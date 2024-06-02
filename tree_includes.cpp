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
    TreeNode* searchBST(TreeNode* root, int val) {
        // if(!root) return {};
        // queue<TreeNode*> q;
        // q.push(root);
        // while(!q.empty()){
        //     TreeNode* current=q.front();
        //     q.pop();
        //     if(current->val==val) return current;
        //     if(current->left) q.push(current->left);
        //     if(current->right) q.push(current->right);
        // }

        // return {};
        if(!root || root->val == val) return root;
        if(val<root->val) return searchBST(root->left,val);

        return searchBST(root->right,val);

    }
};