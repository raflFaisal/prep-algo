Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level). 

Example 1:
                       3
                     /   \
                  9      20
                         /   \ 
                       15   7


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []




    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root == NULL)
            return vector<vector<int>> ();
        
        vector<vector<int>> v;
        queue<TreeNode*> q;
        
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> v2;
            for(int i=0; i<size; i++) 
            {
                TreeNode *temp = q.front();
                q.pop();
                v2.push_back(temp->val);   
                
                if(temp->left != NULL)
                    q.push(temp->left);
                
                if(temp->right != NULL)
                    q.push(temp->right);
            }
            v.push_back(v2);
        }
        
        return v;
    }
	
	
	TC => O(N)
    SC =>
    Best case => O(1) => If tree is skewed
    Avg case => O(D) => D is diameter of tree
    In case of complete binary tree, No of nodes at last level = n/2
    => O(n/2) => O(n)