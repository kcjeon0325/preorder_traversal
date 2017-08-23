void PreorderTraversal(note *root)
{
	if(!root) 
		return;
	else 
		printf("%p %d\n", cur_node, cur_node->data);
	PreorderTraversal(cur_node->left);
	PreorderTraversal(cur_node->right);
}