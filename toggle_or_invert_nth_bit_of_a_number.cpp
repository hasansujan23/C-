#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    int i=n ^ (1<<p);
    cout<<i<<endl;
    ///Let n=12 and p=2 then,
    ///    12=1100 and 1=0001
    ///(1<<p)=0100
    ///      =1000=8
    return 0;
}
