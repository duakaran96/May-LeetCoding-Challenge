/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int xDepth = 0, yDepth = 0;
    TreeNode *xParent, *yParent;
    void traverse(TreeNode *currNode, TreeNode *parent, int depth, int x, int y) {
        if (currNode->val == x) {
            xDepth = depth;
            xParent = parent;
        }
        if (currNode->val == y) {
            yDepth = depth;
            yParent = parent;
        }
        
        parent = currNode;
        if (currNode->left)
            traverse(currNode->left, parent, depth + 1, x, y);
        if (currNode->right)
            traverse(currNode->right, parent, depth + 1, x, y);
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        xParent = root;
        yParent = root;
        traverse(root, root, 0, x, y);
        
        return xParent->val != yParent->val && xDepth == yDepth;
    }
};
