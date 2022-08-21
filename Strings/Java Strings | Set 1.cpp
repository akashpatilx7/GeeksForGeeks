//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string conRevstr(string S1, string S2) {
        string res="";
        int len=(S1+S2).length();
        for(int i=len-1;i>=0;i--){
            res+=(S1+S2)[i];
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.conRevstr(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends

/* How does strcat work in C++?
   The strcat() function takes two arguments: dest and src . This function appends a copy of the character string pointed to by src to the end of string pointed to by dest . The null terminating character at the end of dest is replaced by the first character of src and the resulting character is also null terminated. */
