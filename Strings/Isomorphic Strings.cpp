//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        char hash[256];
        
        int n1=str1.length();
        int n2=str2.length();
        
        // Checking wheather the lengths of both the strings are equal or not. If not, then immediately return false as : THE BASE CONDITION FOR TWO STRINGS TO BE ISOMORPHS IS TO HAVE EQUAL LENGTHS.
        if(n1!=n2){
            return false;
        }
        
        // Checking the mapping of str1 with str2
        for(int i=0;i<n1;i++){
            hash[str1[i]]=str2[i];
        }
        for(int i=0;i<n1;i++){
            if(str2[i]!=hash[str1[i]]){
                return false;
            }
        }
        
        // Checking the mapping of str2 with str1
        for(int i=0;i<n2;i++){ // NOTE : Here, as n1=n2 is the only left case, we can use n1 inplace of n2 also.
            hash[str2[i]]=str1[i];
        }
        for(int i=0;i<n2;i++){
            if(str1[i]!=hash[str2[i]]){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
