//{ Driver Code Starts
// C++ program to Print root to leaf path WITHOUT
// using recursion
#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

// } Driver Code Ends


// Return true if str is binary, else false
bool isBinary(string str)
{
    for(int i=0;i<str.length();i++){
        if(str[i]!='0' && str[i]!='1'){
            return 0;
        }
    }
    return 1;
}

/* NOTE : Basic Input and Output in C


C language has standard libraries that allow input and output in a program. The stdio.h or standard input output library in C that has methods for input and output.

scanf()
The scanf() method, in C, reads the value from the console as per the type specified. Syntax:

scanf(“%X”, &variableOfXType); where %X is the format specifier in C. It is a way to tell the compiler what type of data is in a variable and & is the address operator in C, which tells the compiler to change the real value of this variable, stored at this address in the memory.

printf()
The printf() method, in C, prints the value passed as the parameter to it, on the console screen. Syntax:

printf(“%X”, variableOfXType); where %X is the format specifier in C. It is a way to tell the compiler what type of data is in a variable and & is the address operator in C, which tells the compiler to change the real value of this variable, stored at this address in the memory.

How to take input and output of basic types in C?
The basic type in C includes types like int, float, char, etc. Inorder to input or output the specific type, the X in the above syntax is changed with the specific format specifier of that type. The Syntax for input and output for these are:

Integer:
Input: scanf("%d", &intVariable);
Output: printf("%d", intVariable);


Float:
Input: scanf("%f", &floatVariable);
Output: printf("%f", floatVariable);


Character:
Input: scanf("%c", &charVariable);
Output: printf("%c", charVariable); 


How to take input and output of advanced type in C?
The advanced type in C includes type like String. In order to input or output the string type, the X in the above syntax is changed with the %s format specifier. The Syntax for input and output for String is:

Input: scanf("%s", stringVariable);
Output: printf("%s", stringVariable); */

