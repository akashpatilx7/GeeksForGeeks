//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int leftElement(int a[], int n) {
        int lastElement;
        sort(a,a+n);
        if(n%2==0){
            lastElement=a[(n/2)-1];
        }
        
        else{
            lastElement=a[n/2];
        }
        return lastElement;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.leftElement(a, n) << endl;
    }
}

// } Driver Code Ends
