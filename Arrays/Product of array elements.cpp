//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



// } Driver Code Ends
//User function Template for C++



/*  
     ar[] is the array
     n = number of element in array
     mod = modulo value;
*/
long long int product(int ar[], int n, long long int mod)
 {
    long long int product=1;
    for(int i=0;i<n;i++){
        product=(product*ar[i])%mod;
    }
    return product; // NOTE : TRY TO STORE THE MODULO VALUE IN ONE VARIABLE AND THEN RETURN IT RATHER THAN TRYING TO RETURN IT DIRECTLY.
 }

//{ Driver Code Starts.

int main()
{
 int t;
 cin>>t;
 while(t--)
   {
    int n;
    cin>>n;
    int ar[100001]={0};
    for(int i=0;i<n;i++)
      cin>>ar[i];  
      
    long long int mod=1000000007;
   cout<<product(ar,n,mod)<<endl;
    
 }
return 0;
}
// } Driver Code Ends

/* NOTE : WHAT IS TYPEDEF ? WHAT IS IT USED FOR ? 
The typedef keyword allows the programmer to create new names for types such as int or, more commonly in C++, templated types--it literally stands for "type definition". Typedefs can be used both to provide more clarity to your code and to make it easier to make changes to the underlying data types that you use. */ 
