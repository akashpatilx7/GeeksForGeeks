//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends

class Solution{
  public:
    void rearrangeArray(int arr[], int n) {
        vector<int>ans;
        sort(arr,arr+n);
        
        for(int i=0;i<=n/2;i++){
            ans.push_back(arr[i]);
            ans.push_back(arr[n-1-i]);
        }
        
        for(int i=0;i<n;i++){
            arr[i]=ans[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
