//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long maxPoint(int N, int K, long long A[], long long B[])
    {
        long long maxPoints=0;
        for(int i=0;i<N;i++){
            long long points=(K/A[i])*B[i];
            if(points>maxPoints){
                maxPoints=points;
            }
        }
        return maxPoints;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        long long A[N], B[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        for(int i = 0;i < N;i++)
            cin>>B[i];
        
        Solution ob;
        cout<<ob.maxPoint(N, K, A, B)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
