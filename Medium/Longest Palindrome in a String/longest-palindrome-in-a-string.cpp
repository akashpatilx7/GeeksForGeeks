//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        
        // Time Complexity : O(N*N) & Space Complexity : O(1)
        // Logic : For calculating the length of a substring, we need 2 things: the starting point & the length of the substring
        
        int start=0;
        int maxLength=1; // the minimum possible size of a palindromic substring is 1 (a single character)
        
        for(int i=1;i<S.size();i++){
            // Even
            int l=i-1;
            int r=i;
            
            while(l>=0 && r<S.size() && S[l]==S[r]){
                if(r-l+1>maxLength){
                    maxLength=r-l+1;
                    start=l;
                }
                l--;
                r++;
            }
            
            // Odd
            l=i-1;
            r=i+1;
            
            while(l>=0 && r<S.size() && S[l]==S[r]){
                if(r-l+1>maxLength){
                    maxLength=r-l+1;
                    start=l;
                }
                l--;
                r++;
            }
        }
        
        return S.substr(start,maxLength);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends