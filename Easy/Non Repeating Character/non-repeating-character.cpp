//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       // Time Complexity : O(N) & Space Complexity : O(1) as array has fixed elements=256
       
       int arr[256]={0};
       
       for(int i=0;i<S.length();i++){
           arr[S[i]]++;
       }
       
       for(int i=0;i<S.length();i++){
           if(arr[S[i]]==1){
               return S[i];
           }
       }
       
       return '$';
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends