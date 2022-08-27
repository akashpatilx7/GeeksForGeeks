//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    int i=0,j=0;
    string res="";
    
    for(int k=0;k<S1.length()+S2.length();k++){
        if(i<S1.length()){
            res+=S1[i];
        }
        
        if(j<S2.length()){
            res+=S2[i];
        }
        i++;
        j++;
    }
    return res;
}
