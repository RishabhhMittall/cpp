/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    
    
  public:
  
    void leftTree (Node* root, vector<int> & ans) {
        
        //base case
        if((root == NULL) || ( root -> left == NULL and root -> right == NULL)) {
            return;
        }
        
        ans.push_back(root -> data);
        
         if(root -> left) {
             leftTree(root -> left, ans);
         }
         else {
             leftTree(root -> right, ans);
             
         }
    }
    
    void leaf(Node* root, vector<int> & ans) {
        
        //base case
        if(root == NULL) {
            return;
        }
        
        if(root -> left == NULL && root -> right == NULL){
            ans.push_back(root-> data);
        }
        
        leaf(root -> left, ans);
        leaf(root -> right, ans);
    }
    
    void rightTree(Node* root, vector<int> &ans) {

        if((root == NULL) || ( root -> left == NULL and root -> right == NULL)) {
            return;
        }
        
        if(root -> right) {
            rightTree(root -> right, ans);
        }
        else {
            rightTree(root -> left, ans);
        }
        
        ans.push_back(root -> data);
        
        
    }
    
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        
        if(root == NULL) {
            return ans;
        }
        
        ans.push_back(root -> data);
        
        leftTree(root -> left , ans);
        leaf(root -> left , ans);
        leaf(root -> right , ans);
        rightTree(root -> right, ans);
        return ans;
    }
};