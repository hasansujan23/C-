#include<bits/stdc++.h>
using namespace std;

int power(int b,int p){
    int m=0;
    for(int i=0;i<p;i++){
        m*=b;
    }
    return m;
}

void rec(int n,int b,int p){
    if(power(b,p)>n)
        return;
    if(power(b,p)==n){
        cout<<"Yes"<<endl;
        return;
    }
    rec(n,b,p+1);
}

int main()
{
    int a,b;
    cin>>a>>b;
    rec(a,b,0);
    return 0;
}
