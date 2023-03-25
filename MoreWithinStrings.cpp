#include<bits/stdc++.h>
//#include<unordered_map>
using namespace std;
#define lli   long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define db long double
#define prq priority_queue<lli>
#define psq priority_queue<lli,vector<lli>,greater<lli>>
#define mod 1e9 + 7
#define lb lower_bound
#define ub upper_bound
#define vlli vector<lli>
#define mslli multiset<lli>
#define inf 1e17
#define pb push_back
#define count10 count1 = 0
#define count20 count2 = 0
#define pie 3.14159265358979323846
#define test lli t; cin>>t; while(t--)

void toLower(char &c)
{
    if(c >= 'A' && c<='Z')
    c = c - 'A' +'a';
}


//revStr function accepts char vector and reverses the order of words in it.
// for Eg. if c = ['h','i','m','a','n','s','h','u',' ','k','a','b','r','a']
// then after using function, c = ['k','a','b','r','a',' ','h','i','m','a','n','s','h','u']
void revStr(vector<char> &c)
{
    lli l = c.size();
    vector<string> s;
    string temp = "";
    for (lli i = 0; i <= l; i++)
    {
        if(c[i] == ' ' || i == l)
        {
            s.pb(temp);
            temp = "";
        }
        else
        {
            temp.pb(c[i]);
        }
    }
    lli l1 = s.size();
    c.clear();
    for (lli i = l1-1; i >= 0; i--)
    {
        lli l2 = s[i].length();
        for(lli j = 0; j<l2; j++)
        {
            c.pb(s[i][j]);
        }
        c.pb(' ');
    }
    c.pop_back();
}

int main()
{

    //    string s;
    //    lli arr[26] = {0};
    //    getline(cin,s);
    //    lli l = s.length();
    //    for (lli i = 0; i < l; i++)
    //    {
    //        toLower(s.at(i));
    //        char r = s.at(i);
    //        if(r >= 'a' && r<='z')
    //         arr[int(r)-97]++;
    //    }
    //     for (lli i = 0; i < 26; i++)
    //     {
    //         cout<<(char)('a'+i)<<" "<<arr[i]<<endl;
    //     }

    // string s;
    // getline(cin,s);

    // s.append("chuchu");

    // cout<<stoi(s)-2<<endl;
    // cout<<s.size()<<endl;
    // cout<<s.substr(3,5)<<endl;
    // s.insert(1,"i");

    //   char s1[50],s2[50];
    //   cin>>s1>>s2;
    //   cout<<strcmp(s1,s2)<<endl;

    //Finding for string.
    // cout<<s<<endl;
    // while(s.find("abc")<s.length())
    // {
    //     cout<<s.find("abc")<<endl;
    //     s.erase(s.find("abc"),3);
    //     cout<<s<<endl;
    // }

    return 0;
}



//getline(cin,str) is used to take spaced string as input.
//str.at(position) returns character at given indice position.
//str.length() and str.size() gives string length.
//str.push_back(char) and str.append(string) are used to add letter or string at the end of pre-existing string.
//str.substr(InitialPosition,length) will return substring (part of given string). (NOTE THE PARAMETERS)
//str.insert(postition,string) is used to insert string in between given string at given position.
//str.find(string) will return the indice of first charater of given string if found in str and will return some garbage value if not found.
//str.erase(InitialPosition, length) will erase length of string from given indice from str. 