class Solution {
public:
    bool solve(TreeNode*left,TreeNode*right){
         if(left==NULL && right==NULL) return true;
           if(left==NULL || right==NULL)return false;
           if(left->val!=right->val)return false;
        // if(left->val==right->val)return true;
        return solve(left->left,right->right) && solve(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
       return solve(root->left,root->right);
         
         
    }
};