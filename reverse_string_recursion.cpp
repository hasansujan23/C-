#include<bits/stdc++.h>
using namespace std;
string s;

void rec(int i){
    if(s[i]=='\0')
        return;
    rec(i+1);
    cout<<s[i];
}

int main()
{
    //getline(cin,s);
    //rec(0);
    cout<<INT_MAX<<endl;
    return 0;
}
