//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        
        // Time Complexity : O(NlogN) & Space Complexity : O(N)

/*
Time Complexity:

The code utilizes the Sieve of Eratosthenes algorithm to find the least prime factors for numbers up to 'n'.
The outer loop runs from 2 to 'n', which contributes O(N) time complexity.
The inner loop, triggered when least_prime[i] is initially found to be 0 (indicating 'i' is a prime number), runs for a range of numbers: j starts from 2 * i and increases by 'i' in each iteration, covering all multiples of 'i' up to 'n'.
In the worst case, each number in this range is processed exactly once (excluding prime numbers), contributing to a total of roughly N/2 + N/3 + N/5 + N/7 + ... = N * (1/2 + 1/3 + 1/5 + 1/7 + ...) = N * log(log N) operations due to prime factorization.
Combining the operations of both loops, the total time complexity is approximately O(N * log(log N)).
Space Complexity:

The code uses an additional vector, least_prime, of size 'n+1' to store the least prime factors for numbers up to 'n'.
This vector consumes O(N) space, as it stores an entry for each number from 1 to 'n'.
In summary:

Time Complexity: O(N * log(log N))
Space Complexity: O(N)
*/

        vector<int>least_prime(n+1, 0);
        least_prime[1]=1;
        
        for(int i=2;i<=n;i++){
            if(least_prime[i]==0){
                // if i is a prime number 
                least_prime[i]=i;
                
                // if i is not a prime number
                for(int j=2*i;j<=n;j+=i){
                    if(least_prime[j]==0){
                        least_prime[j]=i;
                    }
                }
            }
        }
        return least_prime;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends