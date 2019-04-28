#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int bits=sizeof(int)*8;
    int msb=1<<(bits-1);///1=00000000000000000000000000000001
              ///1<<(bits-1)=10000000000000000000000000000000
    if(n & msb)
        cout<<"msb: 1"<<endl;
    else
        cout<<"msb: 0"<<endl;
    return 0;
}
