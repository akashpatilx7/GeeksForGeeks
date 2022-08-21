//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string S) {
        /* transform(S.begin(),S.end(),S.begin(),::tolower);
        cout<<S; */ 
      
        /* How do you convert a character from uppercase to lowercase?
           Program to convert the uppercase string into lowercase using the strlwr() function. The strlwr() function is a predefined function of the string library used to convert the uppercase string into the lowercase by passing the given string as an argument to return the lowercase string. */
      
        for(int i=0;i<S.length();i++){
            if(S[i]>='A' && S[i]<='Z'){
                S[i]+='a'-'A';
            }
        }
        return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends
