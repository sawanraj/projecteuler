//The largest palindrome made from the product of two 3-digit numbers.
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool ispalindrome(int num){
    string s=to_string(num);
    string r=s;
    reverse(r.begin(),r.end());
    
    return s==r;
}
int main()
{
    int max_p=0;
    int factor1=0;
    int factor2=0;
    
    for(int i=999;i>=100;i--){
        for(int j=999;j>=100;j--){
            int p=i*j;
            
            if(p <=max_p)
            break;
            
            if(ispalindrome(p)){
                max_p=p;
                factor1=i;
                factor2=j;
            }
        }
    }
    cout << "Largest Palindrome: " << max_p<< std::endl;
    cout << "Factors: " << factor1 << " x " << factor2 << std::endl;
    return 0;
}