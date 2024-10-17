//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        long long minElement = LLONG_MAX; // Initialize minElement to maximum possible value
        long long maxElement = LLONG_MIN; // Initialize maxElement to minimum possible value
        
        for (long long int num : arr) {
            if (num < minElement) {
                minElement = num; // Update minElement if a smaller number is found
            }
            if (num > maxElement) {
                maxElement = num; // Update maxElement if a larger number is found
            }
        }
        
        return make_pair(minElement, maxElement); // Return the pair of min and max
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends