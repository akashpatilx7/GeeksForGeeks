//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
string ReverseSort(string str);

int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        cout << ReverseSort(s) << endl;
    }
return 0;
}

// } Driver Code Ends



string ReverseSort(string str){
    int arr[26]={0};
    int i;
    for(i=0 ;i<str.length() ;i++)
    {
        arr[str[i]-97]++;
    }
    int j =0;
    for(i=25; i>=0 ;i--)
    {
        for(int k=0 ;k<arr[i] ;k++)
        {
            str[j] = i+97;
            j++;
        }
    }
    return str;
}
