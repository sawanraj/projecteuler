#include <iostream>

using namespace std;
int main()
{
    int n=1000;
    int sum=0;
    for(int i=3;i<n;i++){
        if(!(i%3) || !(i%5)){
            sum+=i;
        }
    }
    cout<<"Sum:"<<sum<endl;
    return 0;
}
/*output:
sum:233168
*/