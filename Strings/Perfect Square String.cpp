//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int isSquare(string S);

int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << isSquare(S) << endl;
    }
return 0;
}
// } Driver Code Ends


int isSquare(string S){
    int sumAscii=0;
    for(int i=0;i<S.length();i++){
        sumAscii+=char(S[i]);
    }
    
    int sr=sqrt(sumAscii);
    if(sr*sr==sumAscii){
        return 1;
    }
    return 0;
}
