
    // L N R
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == NULL)
            return vector<int> ();
        
        vector<int> v;
        stack<TreeNode*> stk;
        
        while(!stk.empty() || root != NULL)
        {
            while(root != NULL)
            {
                stk.push(root);
                root = root->left;
            }
            
            root = stk.top();            
            stk.pop();
            
            v.push_back(root->val);
            root = root->right;            
        }
        return v;
    }
	
	
//  Time Complexity = O(N)
//  Space Complexity = O(N)