class Solution {  
public:  
    TreeNode* invertTree(TreeNode* root) {
    	if (root != NULL) {
    		TreeNode *node = invertTree(root -> left);
			root -> left = invertTree(root -> right);
			root -> right = node;
    	}
		return root;
    }
}