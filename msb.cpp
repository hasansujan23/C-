#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int bits=sizeof(int)*8;
    int msb=1<<(bits-1);
    if(n & msb)
        cout<<"msb: 1"<<endl;
    else
        cout<<"msb: 0"<<endl;
    return 0;
}
