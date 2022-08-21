//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string S) {
        // NOTE : THE BEST APPROACH POSSIBLE HERE IS TO TRAVERSE THE GIVEN STRING WITH A BACKWARD FOR LOOP AND STORE THE OBTAINED CHARACTERS IN A RESULTANT VECTOR LIKE DATA STRUCTURE AND PRINT IT.
        string res;
        for(int i=S.length()-1;i>=0;i--){
            res.push_back(S[i]);
        }
        return res;
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
        cout << ob.revStr(S) << endl;
    }
    return 0;
}

// } Driver Code Ends
