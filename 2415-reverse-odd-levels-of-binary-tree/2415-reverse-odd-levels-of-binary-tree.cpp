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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level_cnt=0;
        while(!q.empty()){
            int size = q.size();
            vector<TreeNode*> level;
            for(int i=0;i<size;i++){
                TreeNode* level_node = q.front();
                q.pop();
                if(level_node->left!=NULL) q.push(level_node->left);
                if(level_node->right!=NULL) q.push(level_node->right);
                level.push_back(level_node);
            }
            if(level_cnt&1){
                for(int i=0;i<size/2;i++){
                    swap(level[i]->val,level[size-i-1]->val);
                }
            }
            level_cnt++;
        }
        return root;
    }
};