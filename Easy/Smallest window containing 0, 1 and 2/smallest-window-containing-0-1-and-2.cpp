//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        int n = S.length();
    int count[3] = {0}; 
    int totalCount = 0; 

    int left = 0, right = 0; 
    int minLength = INT_MAX;

    while (right < n) {
        if (count[S[right] - '0'] == 0) {
            totalCount++;
        }
        count[S[right] - '0']++;

        
        while (totalCount == 3) {
            minLength = min(minLength, right - left + 1);
            count[S[left] - '0']--;
            if (count[S[left] - '0'] == 0) {
                totalCount--;
            }
            left++;
        }
        right++;
    }

    return (minLength == INT_MAX) ? -1 : minLength;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends