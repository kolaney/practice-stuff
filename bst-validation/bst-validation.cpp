// namespace std have been included for this problem.
bool check_children(treeNode* root, int min, int max)
{
    if (root == NULL){
        return true;
    }
    if (root->value < min || root->value > max){
        return false;
    }
    return (check_children(root->left, min, root->value-1) && check_children(root->right, root->value+1, max));
}
/* write helper functions above this line only */
bool validate_bst(treeNode* root)
{   
    return(check_children(root, INT_MIN, INT_MAX));
}