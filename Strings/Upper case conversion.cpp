//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    for(int i=0;i<s.length();i++){
        // to convert a lowercase character to an uppercase, you only need to subtract 32 from the lowercase character
        if(islower(s[0])){
            s[0]-=32;
        }
        
        if(s[i]==''){
            i++;
            if(islower(s[i])){
                s[i]-=32;
            }
        }
    }
    return s;
}


/* isupper() and islower() and their application in C++


In C++, isupper() and islower() are predefined functions used for string and character handling. cstring.h is the header file required for string functions and cctype.h is the headerfile required for character functions.


isupper() Function: This function is used to check if the argument contains any uppercase letters such as A, B, C, D, …, Z. 
Syntax:
int isupper(int x)

islower() Function: This function is used to check if the argument contains lowercase letters such as a, b, c, d, …, z. 
Syntax:
int islower(int x) */
