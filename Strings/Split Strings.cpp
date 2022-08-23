//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    vector<string> splitString(string S) 
    {
        string s1,s2,s3;
        
        for(int i=0;i<S.length();i++){
            if((S[i]>='a' && S[i]<='z') || (S[i]>='A' && S[i]<='Z')){
                s1.push_back(S[i]);
            }
            
            else if(S[i]>='0' && S[i]<='9'){
                s2.push_back(S[i]);
            }
            
            else{
                s3.push_back(S[i]);
            }
        }
        
        vector<string>result;
        result.push_back(s1);
        result.push_back(s2);
        result.push_back(s3);
        return result;
    } 
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        vector<string> result = ob.splitString(S);
        for (int i = 0; i < result.size(); ++i)
        {
            if(result[i] == "")
                cout<<-1<<"\n";
            else
                cout<<result[i]<<"\n";
        }
    }
    return 0; 
} 


// } Driver Code Ends
