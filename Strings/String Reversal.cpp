//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
   int arr[26] = {0};
   string res;
   for(int i=s.size()-1;i>=0;i--){
       if(arr[s[i]-'A']==0 && s[i]!=' '){
           res +=s[i];
           arr[s[i]-'A']++;
       }
   }
   return res;
}
