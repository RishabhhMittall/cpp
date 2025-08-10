/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root == NULL) {
            return ans;
        }
        
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push(make_pair(root, 0));
        
        while(!q.empty()) {
            pair<Node*, int> temp = q.front();
            q.pop();
            int hd = temp.second;
            Node* frontNode = temp.first;
            
            mp[hd] = frontNode -> data;
            
            if(frontNode -> left ) {
                q.push(make_pair(frontNode -> left, hd - 1));
            }
            if(frontNode -> right) {
                q.push(make_pair(frontNode -> right, hd + 1));
            }
        }
        
        for(auto i: mp) {
            ans.push_back(i.second);
        }
        return ans;
    }
};