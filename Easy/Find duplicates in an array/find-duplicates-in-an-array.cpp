//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        unordered_set<long long> seen;
        unordered_set<long long> duplicates;
        
        for (int i = 0; i < n; i++) {
            if (seen.find(arr[i]) != seen.end()) {
                duplicates.insert(arr[i]);
            } else {
                seen.insert(arr[i]);
            }
        }
        
        vector<int> ans(duplicates.begin(), duplicates.end());
        sort(ans.begin(), ans.end());
        if (ans.empty()) {
            return {-1};
        } else {
            return ans;
        }
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends