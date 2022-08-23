//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
            
        }
}

// } Driver Code Ends


string convert(string s)
{
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=('a'+'z')-s[i];
        }
        
        else if(s[i]>='A' && s[i]<='Z'){
            s[i]=('A'+'Z')-s[i];
        }
    }
    return s;
}
