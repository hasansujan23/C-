#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n>=1){
        cout<<n<<" ";
        fun(n-1);
        if(n>1)
            cout<<n<<" ";
    }
}

void fu(int x,int n){
    if(x<=n){
        cout<<x<<" ";
        fu((x+1),n);
        if(x!=n)
            cout<<x<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    //fun(n);
    fu(1,n);
    return 0;
}
