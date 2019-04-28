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

int main()
{
    int n,bits;
    cin>>n;
    bits=highest_bit(n);
    int q=1<<bits;
    for(int i=0;i<bits+1;i++){
        if(n&(q>>i))
            cout<<"1";
        else
            cout<<"0";
    }
    return 0;
}

