//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            // NOTE : In the given example, isupper(),islower(),isalpha(),isdigit() functions can be used to check the required values, but instead use the simple logical approach to write the code.
        

            vector<int>res;
            int upperCase=0;
            int lowerCase=0;
            int specialCharacters=0;
            int numericValues=0;
            
            for(int i=0;i<s.length();i++){
                if(s[i]>='A' && s[i]<='Z'){
                    upperCase++;
                }
                else if(s[i]>='a' && s[i]<='z'){
                    lowerCase++;
                }
                else if(s[i]>='0' && s[i]<='9'){
                    specialCharacters++;
                }
                else {
                    numericValues++;
                }
            }
            res.push_back(upperCase);
            res.push_back(lowerCase);
            res.push_back(specialCharacters);
            res.push_back(numericValues);
            return res;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends
