#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include "math.h"

using namespace std;

long double dis(pair<int,int> p)
{
    return sqrt((p.first*p.first)+(p.second*p.second));
}

long double dis2(pair<int,int> p,pair<int,int> q)
{
    return sqrt(((p.first-q.first)*(p.first-q.first))+((p.second-q.second)*(p.second-q.second)));
}

class vala
{
    public:
    vector<pair<int,int>> arr[3];
};

int main()
{
    int t;
    cin>>t;
    vector<vala> mn;
    for(int c=0;c<t;c++)
    {
        vala d;
        int x,y;
        cin>>x>>y;
        int n,m,k;
        cin>>n>>m>>k;
    vector<pair<int,int>> p,q,r;
        for(int n1=0;n1<n;n1++)
        {
            int a=0,b=0;
            cin>>a>>b;

            p.push_back(make_pair(a-x,b-y));
        }
        d.arr[0] = p;

        for(int m1=0;m1<m;m1++)
        {
            int a=0,b=0;
            cin>>a>>b;

            q.push_back(make_pair(a-x,b-y));
        }
        d.arr[1] = q;

        for(int k1=0;k1<k;k1++)
        {
            int a=0,b=0;
            cin>>a>>b;

            r.push_back(make_pair(a-x,b-y));
        }
        d.arr[2] = r;
        mn.push_back(d);
    }

for(auto val:mn)
{
    vector<long double> b;
    transform(val.arr[0].begin(),val.arr[0].end(),back_inserter(b),dis);
    auto it =min_element(b.begin(),b.end());
    auto k = distance(b.begin(),it);
    cout<<(val.arr[0])[k].first<<","<<(val.arr[0])[k].second<<endl;

    vector<long double> c;
    transform(val.arr[1].begin(),val.arr[1].end(),back_inserter(c),dis);
    auto it1 =min_element(c.begin(),c.end());
    auto k1 = distance(c.begin(),it1);
    cout<<(val.arr[1])[k1].first<<","<<(val.arr[1])[k1].second<<endl;
    //cout<<min(*it,*it1)<<endl;

    vector<long double> d;
    transform(val.arr[2].begin(),val.arr[2].end(),back_inserter(d),dis);
    auto it2 =min_element(d.begin(),d.end());
    auto k2 = distance(d.begin(),it2);
    cout<<(val.arr[2])[k2].first<<","<<(val.arr[2])[k2].second<<endl;
    //cout<<min(*it,*it1)<<endl;
}

return 0;
}

