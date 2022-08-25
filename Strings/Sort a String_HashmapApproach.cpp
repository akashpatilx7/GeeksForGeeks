//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}




// } Driver Code Ends


string sort(string s){
    int characters[26] ={0};
    for(int i=0;i<s.length();i++){
        characters[s[i]-'a']++;
    }
    int k=0;
    for(int i=0;i<26;i++){
        for(int j=0;j<characters[i];j++){
            s[k++] = i + 'a';
        }
    }
    return s;
}
