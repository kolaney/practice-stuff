// namespace std have been included for this problem.

vector<int> preordered_list;
// Add any helper functions(if needed) below.
void left_then_right(treeNode* root){
    preordered_list.push_back(root->value);
    if(root->left != NULL){
        left_then_right(root->left);
    }
    if(root->right != NULL){
        left_then_right(root->right);
    }
}

// Add any helper functions(if needed) above.
void preorder(treeNode* root)
{
    if(root != NULL){
        left_then_right(root);
    }
    
}