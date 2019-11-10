#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include "math.h"

using namespace std;

int main()
{
int t;
cin>>t;
vector<int> m;
for(int c=1;c<100;c++)
{
    int x;
    //cin>>x;
    m.push_back(c);
}
for(auto val:m)
{
    bool fla=false;
    const uint64_t sumto =val-4;
if(val==1)
{
    fla=true;
    cout<<'1'<<endl;
}
else if(val==2)
{
    fla=true;
    cout<<"34"<<endl;
}
else if(val==3)
{
    fla=true;
    cout<<"122"<<endl;
}
else
{
    for(uint64_t n=1111;n<9999;n++)
    {
        if(n>999)
        cout<<val<<endl;
        auto l =to_string(n);
        if(count(l.begin(),l.end(),'0')<1)
        {
            uint64_t sum=0;
            for_each(l.begin(), l.end(), [&](char lo) { sum+=((lo-'0')*(lo-'0'));} );
            long double p = sqrt(sum +sumto);
            if(p - floor(p) == 0)
            {
                fla=true;

                for(int co=0;co<(val-4);co++)
                {
                    //cout<<'1';
                }
                //cout<<n<<endl;

                break;
            }
        }
    }
}
    if(fla==false)
        cout<<"-1"<<endl;
}
return 0;
}

