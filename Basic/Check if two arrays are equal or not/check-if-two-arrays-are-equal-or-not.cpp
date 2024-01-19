//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        // If sizes are different, arrays can't be equal
        if (A.size() != B.size()) {
            return false;
        }

        // Create hash maps to store counts of elements in both arrays
        unordered_map<long long, int> countA, countB;

        // Count occurrences in array A
        for (int i = 0; i < N; ++i) {
            countA[A[i]]++;
        }

        // Count occurrences in array B
        for (int i = 0; i < N; ++i) {
            countB[B[i]]++;
        }

        // Compare counts of each element
        for (auto& kv : countA) {
            if (countB.find(kv.first) == countB.end() || countB[kv.first] != kv.second) {
                return false;
            }
        }

        // If all counts are equal, arrays are equal
        return true;
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends