//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        bool check (string s)
        {
            char ans=s[0];
            for(int i=0;i<s.length();i++){
                if(s[i]!=ans){
                    return false;
                }
            }
            return true;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
