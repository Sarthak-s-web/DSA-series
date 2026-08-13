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
class FindElements {
public:

unordered_set<int>st;
void recover(TreeNode* root,int value)
{
    if(root==NULL)
    return;
    root->val=value;
    st.insert(value);
    recover(root->left,value*2+1);
    recover(root->right,value*2+2);
}
    FindElements(TreeNode* root) {
        recover(root,0);
    }
    
    bool find(int target) {
        return st.count(target)>0;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */