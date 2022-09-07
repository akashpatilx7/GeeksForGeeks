//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    vector<int>ans;
	    sort(arr,arr+N);
	    
	    int left=0;
	    int right=N-1;
	    int mid=(left+right)/2;
	    
	    while(left<right){
	        ans.push_back(arr[right]);
	        right--;
	        ans.push_back(arr[left]);
	        left++;
	    }
	    
	    if(left==right){
	        ans.push_back(arr[left]);
	        left--;
	    }
	    return ans;
	}
};
	

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
