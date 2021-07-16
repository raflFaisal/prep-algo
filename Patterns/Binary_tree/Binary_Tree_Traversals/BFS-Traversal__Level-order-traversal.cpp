
std::vector<int> BFS_traversal(Tree *root)   
{
	if (root == NULL)
		return std::vector<int> ();
		
	std::queue<Tree *> q;
	std::vector<int> v;
	
	q.push(root);
	while(!q.empty())
	{
		root = q.front();
		q.pop();
		v.push_back(root->node);
		
		if(root->left != NULL)
			q.push(root->left);
			
		if(root->right != NULL)
			q.push(root->right);
	}	
	
	return v;
}


