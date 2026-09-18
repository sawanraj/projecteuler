#include <iostream>
using namespace std;
int main()
{
    long long n=4000000;
    long i=1;
    long j=2;
    long newnum=0;
    long sum=2;
    while(newnum<n){
        newnum=i+j;
        i=j;
        j=newnum;
        if(!(newnum%2)){
            sum+=newnum;
        }
    }
    cout<<"sum:"<<sum<<endl;
    return 0;
}
/*
sum:4613732
*/