#include<bits/stdc++.h>
using namespace std;

int highest_bit(int n){
    int pos=0;
    for(int i=0;i<(sizeof(int)*8)-1;i++){
        if(n & (1<<i))
            pos=i;
    }
    return pos;
}

int lowest_bit(int n){
    int pos=0;
    for(int i=0;i<(sizeof(int)*8)-1;i++){
        if(n & (1<<i)){
            pos=i;
            break;
        }
    }
    return pos;
}

int main()
{
    int n,hi;
    cin>>n;
    hi = highest_bit(n);
    if(hi>0)
        cout<<"higest bit position: "<<hi<<endl;
    else
        cout<<"no higest bit set"<<endl;

    int lw=lowest_bit(n);
    if(lw>=0)
        cout<<"lowest bit position: "<<lw<<endl;
    else
        cout<<"no bit set"<<endl;

    return 0;
}
