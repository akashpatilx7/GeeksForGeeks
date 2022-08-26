//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int LastIndex(string s, char p){
        vector<int>ind;
        for(int i=0;i<s.length();i++){
            if(s[i]==p){
                ind.push_back(i);
            }
            
            else{
                ind.push_back(-1);
            }
        }
        return *max_element(ind.begin(),ind.end());
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}


// } Driver Code Ends
