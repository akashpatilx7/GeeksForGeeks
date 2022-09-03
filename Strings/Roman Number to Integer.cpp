//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        
/* Solution using hashmap:

Intuition - 

In Roman numerals, if a smaller numeral comes before a larger numeral, it is subtracted, otherwise, they are added to get the integer value. eg: 
IV => I (1) is less than V (5) => 5-1 = 4
VI => V(5) is more than I (1) => 5+1 = 6

 
Algo - 

1. Store the Roman numeral characters and their corresponding values in a hashmap.
2. Traverse the given string from end to start. If a value is smaller than its previous value, substract it from answer otherwise add the value to answer. 
3. Return answer */ 

        int ans=0;
        unordered_map<char,int>num;
        
        num['I']=1;
        num['V']=5;
        num['X']=10;
        num['L']=50;
        num['C']=100;
        num['D']=500;
        num['M']=1000;
        
        for(int i=str.length()-1;i>=0;i--){
            if(i<str.length()-1 && num[str[i]]<num[str[i+1]]){
                ans-=num[str[i]];
            }
            
            else{
                ans+=num[str[i]];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends
