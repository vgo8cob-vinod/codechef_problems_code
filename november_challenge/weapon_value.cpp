#include <bits/stdc++.h>

using namespace std;


int countSetBits(int n)
{
    if (n == 0)
        return 0;
    else
        return 1 + countSetBits(n & (n - 1));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=0;
    cin>>t;
    for(int i=0;i<t;i++){
    long long p=0;
    cin>>p;
    std::vector<uint32_t> s;
     for(int j=0;j<p;j++)
     {

         string str;
         cin>>str;
         int l=0;
         int k=0;
        for(auto p:str)
        {
            k<<=1;
            k +=(p-'0')&1;
        }
        s.push_back(k);
     }
    int temp = s[0];
    for(int po=0;po<(s.size()-1);po++)
    {
        s[po+1]= s[po] ^ s[po+1];
        temp =s[po+1];
    }
        cout<<countSetBits(temp)<<endl;
    }
    return 0;
}
