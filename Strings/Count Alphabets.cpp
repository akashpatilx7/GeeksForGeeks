//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int Count(string S);


int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << Count(S) << endl;
    }
return 0;
}


// } Driver Code Ends


int Count(string S){
    int alpha=0;
    for(int i=0;i<S.length();i++){
        if(S[i]>='A' && S[i]<='Z' || S[i]>='a' && S[i]<='z'){
            alpha++;
        }
    }
    return alpha;
}
