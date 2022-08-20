//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int first=-1;
	    int last=-1;
	    
	    int start=0;
	    int end=n-1;
	    while(start<=end){
	        int mid=(start+end)/2;
	        if(arr[mid]==x){
	            first=mid;
	            end=mid-1;
	        }
	        else if(arr[mid]<x){
	            start=mid+1;
	        }
	        else{
	            end=mid-1;
	        }
	    }
	    
	    start=0;
	    end=n-1;
	    while(start<=end){
	        int mid=(start+end)/2;
	        if(arr[mid]==x){
	            last=mid;
                start=mid+1;
            }
            else if(arr[mid]<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
        int ans=0;
        if(first!=-1 and last!=-1){
            ans=last-first+1;
            return ans;
        }
        return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
