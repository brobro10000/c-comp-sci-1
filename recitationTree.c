/* Updates index and feeding within the recursive tree
// #2 on recitation problem finding specified Index
int valueByIndex(int index, struct TreeNode *root){
	
	if(root == NULL || root ->size < index)
	{
		return IMPOSSIBLE;
	}
	
	if(root->left != NULL && root->left->size >index)
	{
	return valueByIndex(index, root->left);
	}
	
	if(root->left != NULL)
	{
		index -= root->left->size;
	}
	if(index == 0)//might b wrong
	{
	return root->value;
	}
	
	index--;
	return valueByIndex(index,root->right);
*/
