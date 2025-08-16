/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left, *right;
};
*/
// your task is to complete this function
class Solution {
  public:
  
    void solve (Node* root, int k , int node, vector<int> path, int &ans) {
        if(root == NULL) return;

         path.push_back(root->data);

        // If current node is the target node
        if(root->data == node) {
            int n = path.size();
            if(n - k - 1 >= 0) {
                ans = path[n - k - 1];
            }
            path.pop_back(); // backtrack
            return;
        }
        solve(root->left, k, node, path, ans);
        solve(root->right, k, node, path, ans);

        path.pop_back();
    }
    int kthAncestor(Node *root, int k, int node) {
        int ans = -1;
        vector<int> path;
        solve(root, k, node, path, ans);
        return ans;
        
    }
};
