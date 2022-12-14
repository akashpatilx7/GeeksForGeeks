//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        int n = str1.length(), m = str2.length();

    // Length of both strings must be
    // same for one to one
    // correspondence
    if (n != m)
        return false;

    // For counting the previous appearances of character in
    // both the strings
    int count[MAX_CHARS] = { 0 };
    int dcount[MAX_CHARS] = { 0 };

    // Process all characters one by one
    for (int i = 0; i < n; i++) {
        count[str1[i] - 'a']++;
        dcount[str2[i] - 'a']++;
    }
        // For string to be isomorphic the previous counts
        // of appearances of
        // current character in both string must be same if
        // it is not same we return false.
  
  
          //before it was not working for the test case mentioned below(wrong output)
          // str1 = "aba" , str2 = "xyy"
      for(int i= 0; i < n; i++) {
        if (count[str1[i] - 'a'] != dcount[str2[i] - 'a']) {
            return false;
        }
    }
    return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
