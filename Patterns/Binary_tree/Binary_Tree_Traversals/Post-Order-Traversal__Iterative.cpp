// L R N
    vector<int> postorderTraversal(TreeNode* root) {
        
        if(root == NULL)
            return vector<int> ();
        
        vector<int> v;
        stack<TreeNode *> stk1;
        stack<TreeNode *> stk2;
        
        stk1.push(root);
        while(!stk1.empty())
        {           
            root = stk1.top();
            stk2.push(root);
            stk1.pop();
            
            if(root->left != NULL)
                stk1.push(root->left);
            
            if(root->right != NULL)
                stk1.push(root->right);            
        }
        
        while(!stk2.empty())
        {
            v.push_back(stk2.top()->val);
            stk2.pop();
        }
        
        return v;        
    }
	
	// Time Complexity => O(N)
    // Space Complexity => O(N)