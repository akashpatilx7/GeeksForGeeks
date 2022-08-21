//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

/* NOTE : DID NOT UNDERSTAND THE BELOW APPROACH. TRY TO UNDERSTAND WHILE REVISING !
    If the string in mutable to the language you're using (for example C++), you can make the changes in your current string as well. Maintain two pointers. One for traversing the string and the other for updating all the non-space characters.


while (i < n){
    if (s[i] != ' ') s[itr++] = s[i];
    i++;
}

Finally, your result will the s.substr (0, itr) */


class Solution
{
  public:
    string modify (string s)
    {
        string res;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                continue;
            }
            else{
                res.push_back(s[i]);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends

/* NOTE : FOR WHAT IS THE CIN.IGNORE FUNCTION USED ?
          The cin.ignore() function is used which is used to ignore or clear one or more characters from the input buffer.

          What does getline () do in C++?
          The C++ getline() is an in-built function defined in the <string. h> header file that allows accepting and reading single and multiple line strings from the input stream. In C++, the cin object also allows input from the user, but not multi-word or multi-line input. That's where the getline() function comes in handy.
          
          How do I remove a character from a string in C++?
          In C++ we can do this task very easily using erase() and remove() function. The remove function takes the starting and ending address of the string, and a character that will be removed. */
