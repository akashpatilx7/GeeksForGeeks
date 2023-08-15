//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        // Sliding Window Technique 
        // Time Complexity : O(N) & Space Complexity : O(1)
        
        long long start=0,end=0,count=0,currProd=1;
        
        while(end<n){
            currProd*=a[end];
            
            while(start<=end && currProd>=k){
                // restoring the currProd variable to its previous value
                currProd/=a[start];
                start++;
            }
            
            count+=end-start+1;
            end++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends