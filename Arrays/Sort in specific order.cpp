//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        vector<int>v1;
        vector<int>v2;
        
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                v2.push_back(arr[i]);
            }
            
            else{
                v1.push_back(arr[i]);
            }
        }
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        reverse(v1.begin(),v1.end());
        int k=0;
        
        for(int i=0;i<v1.size();i++){
            arr[k++]=v1[i];
        }
        
        for(int i=0;i<v2.size();i++){
            arr[k++]=v2[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
