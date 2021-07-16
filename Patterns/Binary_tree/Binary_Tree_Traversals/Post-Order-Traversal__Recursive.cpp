
    vector<int> postorderTraversal(TreeNode* root) {
        
        if(root == NULL)
            return vector<int> ();
        
        vector<int> v;
        helper(root, v);
        
        return v;        
    }
    
    void helper(TreeNode *root, vector<int> &v)
    {
        if(root == NULL)
            return;
        
        helper(root->left, v);
        helper(root->right, v);
        v.push_back(root->val);
    }
   

// Time Complexity => O(n)
// Space Complexity => O(h)