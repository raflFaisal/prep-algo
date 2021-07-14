    std::vector<int> pre_order_traverse(Tree *root)   {
	if(root == NULL)
		return v_pre;
		
	handler_pre(root, v_pre);
	
	return v_pre;
    }
    
    void handler_pre(Tree *root, std::vector<int> &v)  // N L R
    {
         if (root == NULL)
		return;
		
	    v.push_back(root->node);
	    handler_pre(root->left, v);	
	    handler_pre(root->right, v);
    }
	
//  Time Complexity => O(n)
//  Space Complexity => O(h)

//  Recursive Algo is the easiest way