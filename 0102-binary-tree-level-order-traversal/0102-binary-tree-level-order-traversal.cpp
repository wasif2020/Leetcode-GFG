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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        vector<int>vi;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(q.size()>1){
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL){
                q.push(NULL);
                v.push_back(vi);
                vi.clear();
                continue;
            }
            vi.push_back(curr->val);
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        v.push_back(vi);
        return v;
    }
};