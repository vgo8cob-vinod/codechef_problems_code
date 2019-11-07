#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=0;
cin>>t;
    vector<int> po;
for(int i=0;i<t;i++)
{
    int n=0;
    cin>>n;
    po.push_back(n);
}
for(auto l :po)
{
    int res=0;
    vector<int> v{0};
    for(int j=1;j<l;j++)
    {
        if((count(v.begin(),v.end(),v[j-1])-1)==0)
        {
           v.push_back(0);
        }
        else
        {
            auto it =find(v.rbegin()+1,v.rend(),v[j-1]);
            v.push_back(distance(v.rbegin(),it));
        }
        res=v[j];
    }

    cout<<count(v.begin(),v.end(),res)<<endl;
}

}
