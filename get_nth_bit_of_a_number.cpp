#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;///Let n=12 and p=2 then,
    int bits=(n>>p)&1;///12=1100
                   ///12>>2=0011
                   ///    1=0001
               ///(12>>2)&1=0001
    cout<<bits<<endl;
    return 0;
}
