#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int>mp;
    map<char,int>::iterator it;
    string s;
    cin.ignore();
    getline(cin,s);

    for(int i=0;i<s.size();i++){
        if(s[i]!=' ')
            mp[s[i]]++;
    }

    for(it=mp.begin();it!=mp.end();it++)
    {
    cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    return 0;
}

