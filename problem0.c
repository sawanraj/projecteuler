#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=134000;
    //int n=25;
    long long sum=0;// Using long long to prevent 64-bit integer overflow
	 // Loop through the roots directly instead of every number
    for(long long i=1;i<=n;i++){
	    // If the root is odd, its square is an odd square number
     if(i%2){
      sum+=(i*i);  
    }
    }
    cout<<"sum:"<<sum<<endl;
    return 0;
}