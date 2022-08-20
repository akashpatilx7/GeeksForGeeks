//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
        /*  How do you find the size of a vector in C++?
            To get the size of a C++ Vector, you can use size() function on the vector. size() function returns the number of elements in the vector. */
    
    vector<int> v(n);
       for(int i=0,pIndex=0,nIndex=1;i<n;i++){
           if(a[i]>0){
               v[pIndex]=a[i];
               pIndex += 2;
           }
           else{
               v[nIndex]=a[i];
               nIndex += 2;
           }
       }
       return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}

// } Driver Code Ends
