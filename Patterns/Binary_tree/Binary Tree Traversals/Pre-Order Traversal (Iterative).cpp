/*

In Recusive solution, the tree can be very long height, so can exhaust the OS function stack calls (can use big program memory). 
So iterative using Stacks can be a better solution here (although Time Complexity and Space complexity is same as Recursive).

*/

std::vector<int> pre_order_traverse(Tree *root) // N L R
{
if(root == NULL)
return std::vector<int>();

std::vector<int> v;
std::stack<Tree*> stk;    
stk.push(root);

while(!stk.empty())
{
    root = stk.top();
    stk.pop();
    v.push_back(root->node);

    if(root->right != NULL)
        stk.push(root->right);

    if(root->left != NULL)
        stk.push(root->left);
}

return v;
}



/*

Time Complexity => O(n)
Space Complexity => O(n)

We can optimize the space complexity :
(1) By using a bit different iterative solution => O(h)
(2) By using Morris Traversal => O(1)

*/