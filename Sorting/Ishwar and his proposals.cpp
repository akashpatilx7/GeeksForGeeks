//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    vector <int> acceptedProposals (vector <int> &arr, int n)
    {
        sort(arr.begin(),arr.end());
        vector<int> v;
        v.push_back(arr[n-2]);
        v.push_back(arr[1]);
        return v;
    }

};

//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--) 
    {
        int n; cin >> n;
		vector <int> arr (n);
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
        Solution ob;
		vector <int> res = ob.acceptedProposals (arr, n);
		cout << res[0] << " " << res[1] << endl;
    }
}

// } Driver Code Ends
