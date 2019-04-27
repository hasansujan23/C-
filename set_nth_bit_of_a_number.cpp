#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,v,bits;
    cin>>n>>p>>v;
    if(v==0){
        bits=n & (~(1<<p));
    }else{
        bits=n | (1<<p);
    }

    ///if n=12, p=2 and v=0 then,
    ///12=1100
    /// 1=0001
    ///1<<p=0100
    ///~(1<<p)=1011
    ///12 & (~(1<<p))=1100
    ///               1011
    ///              =1000
    ///              =8


    ///if n=12, p=1, and v=1 then,
    /// 12=1100 & 1=0001
   ///1<<p=0010
    ///   =1110

    cout<<bits<<endl;
    return 0;
}
