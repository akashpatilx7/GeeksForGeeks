//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    string N=to_string(n);
    for(int i=0;i<N.length();i++){
        if(N[i]=='0'){
            N[i]='5';
        }
    }
    return stoi(N); // One effective way to convert a string object into a numeral int is to use the stoi() function. This method is commonly used for newer versions of C++, with is being introduced with C++11. It takes as input a string value and returns as output the integer version of it.
  
  /* Can we return a string in C++ ?
     Yes, a c++ function can return anything that is a type except plain c-arrays, they are a bit weird. Functions can only return pointers to the first element of a plain c-array. But that is beside the point, there is a c++ string which can be returned from a function without any restriction. */
}
