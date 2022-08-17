//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string longest(string names[], int n)
    {
        int max_length=0; // *** HERE 0 IS INDEX FROM THE ARRAY, NOT THE ELEMENT FROM THE ARRAY *** 
        for(int i=0;i<n;i++){
            if(names[i].length()>names[max_length].length()){
                max_length=i;
            }
        }
        return names[max_length];
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}

// } Driver Code Ends
