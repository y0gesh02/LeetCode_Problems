class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL) return true;
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(!q.empty()){  
            vector<int>lval;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();q.pop();
                lval.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            for(int i=0;i<n;i++){
                if(level%2==0){
                    if(i<n-1 && lval[i]>=lval[i+1])return false;
                    if(lval[i]%2==0 ) return false;
                }
                else{
                   if(i<n-1 && lval[i]<=lval[i+1])return false;
                   if( lval[i]%2!=0) return false; 
                }
            }
            level+=1;
        }
        return true;
    }
};