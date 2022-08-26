//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy4 (string N)
	{
	    // NOTE : IF THE NUMBER FORMED BY LAST TWO DIGITS OF A NUMBER IS DIVISIBLE BY 4, THE WHOLE NUMBER IS DIVISIBLE BY 4
	    int x=int(N[N.length()-2])*10 + int(N[N.length()-1]);
	    return !(x%4);
	}
};

//{ Driver Code Starts.

int32_t main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy4 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
