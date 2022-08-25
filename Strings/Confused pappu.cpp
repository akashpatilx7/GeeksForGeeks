//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    }
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount){
    long long rem=0;
    long long k=0;
    long long ans=amount;
    long long i=1;
    
    while(amount>0){
        rem=amount%10;
        
        if(rem==6){
            rem+=3;
        }
        
        k=k+rem*i;
        i*=10;
        amount/=10;
    }
    return abs(ans-k);
}
