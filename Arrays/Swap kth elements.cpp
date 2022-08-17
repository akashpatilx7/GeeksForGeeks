//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// swap k'th element from beginning and end
	
	/* Are arrays passed as reference in C++?
     Passing arrays to functions in C/C++ are passed by reference. Even though we do not create a reference variable, the compiler passes the pointer to the array, making the original array available for the called function's use. Thus, if the function modifies the array, it will be reflected back to the original array. */ 
	
	void swapKth(int *arr, int n, int k) {
	    swap(arr[k-1],arr[n-k]);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.swapKth(arr, n, k);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
