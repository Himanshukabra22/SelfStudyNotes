#include<bits/stdc++.h>
using namespace std;

void printmap(map<int,int> p)
{
    cout<<"size is : "<<p.size()<<endl;
    // map<int,int> :: iterator itr;
    // // for ( itr = p.begin(); itr != p.end(); itr++)
    // // {
    // //     cout<<itr->first<<" "<<itr->second<<endl;
    // // }
    for(auto itr : p)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }
}

int main()
{
    vector<string> v1,v2;
    int m,n;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        string x;
        cin>>x;
        v1.push_back(x);
    }
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin>>x;
        v2.push_back(x);
    }

    map<string , pair<int,int> > mapp;
    for (int i = 0; i < m; i++)
    {
        
    }
    
    
    return 0;
}



/*
    map<int,int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        m[x] = y;
    }
    printmap(m);
*/