//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	int subsequenceSum(string s) 
	{
	    int len,sum=0;
	    len=s.length();
	    
	    for(int i=0;i<len;i++){
	        sum+=pow(2,len-1)*(s[i]-'0');
	    }
	    return sum;
	}
};

//{ Driver Code Starts.



int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		Solution ob;

   		cout << ob.subsequenceSum(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
