//{ Driver Code Starts
#include <iostream>
using namespace std;

int EvenOdd(string n1 , string n2);

// driver code
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       string n1;
       cin>>n1;
       string n2;
       cin>>n2;
       cout<<EvenOdd(n1 , n2)<<endl;
   }
    return 0;
}

// } Driver Code Ends


int EvenOdd(string n1 , string n2)
{
    char ch1 = n1[n1.length()-1];
    char ch2 = n2[n2.length()-1];
    
    // typecasting the char to integer
  
    int ans = ((int)ch1) * ((int)ch2);
    
    if(ans % 2 == 0){
        return 1;
    }
    
    else{
        return 0;
    }
}
