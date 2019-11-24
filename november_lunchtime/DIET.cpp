#include<bits/stdc++.h>

using namespace std;


int main()
{
     long long t;

     cin>>t;

     for(long long p=0;p<t;p++)
     {
         long long n=0,k=0;
         cin>>n>>k;
        vector<long> y;
         for(long long a=0;a<n;a++)
            {
                long tes;
                cin>>tes;
                y.push_back(tes);
            }
            long su=y[0];
            long chk=0;
        for(long long ao=0;ao<n;ao++)
        {
            if(y[ao]<k)
            {
                chk=ao+1;
                break;
            }
            else if(y[ao]>k)
            {
                y[ao+1] +=(y[ao]-k);
            }
        }
		        if(chk==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<" "<<chk<<endl;
        }
     }

}
