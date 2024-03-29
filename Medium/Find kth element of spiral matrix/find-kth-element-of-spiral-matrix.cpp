//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		
 		// int n=matrix.size();
 		// int m=matrix[0].size();
 		
 		// NOTE : ALWAYS UPDATE THE DIRECTION VARIABLE OUTSIDE THE FOR LOOP!
 		
 		int left=0, right=m-1;
 		int top=0, bottom=n-1;
 		k--;
 		
 		while(top<=bottom && left<=right){
 		    // left to right
 		    for(int i=left;i<=right;i++){
 		        if(k==0){
 		            return a[top][i];
 		        }
 		        k--;
 		    }
 		    top++;
 		    
 		    // top to bottom
 		    for(int i=top;i<=bottom;i++){
 		        if(k==0){
 		            return a[i][right];
 		        }
 		        k--;
 		    }
 		    right--;
 		    
 		    // right to left
 		    if(top<=bottom){
 		        for(int i=right;i>=left;i--){
 		            if(k==0){
 		                return a[bottom][i];
 		            }
 		            k--;
 		        }
 		        bottom--;
 		    }
 		    
 		    // bottom to top 
 		    if(left<=right){
 		        for(int i=bottom;i>=top;i--){
 		            if(k==0){
 		                return a[i][left];
 		            }
 		            k--;
 		        }
 		        left++;
 		    }
 		}
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends