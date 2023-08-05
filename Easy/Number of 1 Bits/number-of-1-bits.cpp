//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        // Time Complexity : O(NlogN) & Space Complexity : O(1)
        
        int count=0;
        
        while(N){
            // &ing a number with 1 gives the last digit
            int lastDigit=N&1;
            
            // if lastDigit=1, increse the count by 1
            count+=lastDigit;
            
            // right shift
            N=N>>1;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends