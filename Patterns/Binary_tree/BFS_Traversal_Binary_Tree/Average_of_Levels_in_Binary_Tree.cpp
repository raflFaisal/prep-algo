Given the root of a binary tree, return the average value of the nodes on each level in the form of an array. Answers within 10-5 of the actual answer will be accepted.

Example1:

             3
           /    \
        9        20
                 /   \ 
              15    7
Input: root = [3,9,20,null,15,7]
Output: [3.00000,14.50000,11.00000]
Explanation: The average value of nodes on level 0 is 3, on level 1 is 14.5, and on level 2 is 11.
Hence return [3, 14.5, 11].

Example2:
         
             3
           /    \
        9        20
      /   \
    15   7

Input: root = [3,9,20,15,7]
Output: [3.00000,14.50000,11.00000]


**Constraints**:
The number of nodes in the tree is in the range [1, 104].
-231 <= Node.val <= 231 - 1


    vector<double> averageOfLevels(TreeNode* root) {
        
        if(root == NULL)
            return vector<double> ();
        
        queue<TreeNode *> q;
        vector<double> v;
        
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            double sum = 0.0;
            for(int i=0; i<size; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                
                if(temp->left != NULL)
                    q.push(temp->left);
                
                if(temp->right != NULL)
                    q.push(temp->right);
                
                sum += (double) temp->val;
            }
            v.push_back(sum/size);
        }
        return v;
    }

TC => O(N)
SC => O(D) , D is diameter of tree