/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
  
    void solve(Node* root, vector<int> &ans,int lvl) {
        
        if(root == NULL) {
            return;
        }
        
        if(lvl == ans.size()) {
            ans.push_back(root-> data);
        }
        
        solve(root -> right, ans, lvl + 1);
        solve(root -> left, ans, lvl + 1);
    }
    vector<int> rightView(Node *root) {
        //  Code here
        
        vector<int> ans;
        solve(root, ans , 0);
        return ans;
        
    }
};