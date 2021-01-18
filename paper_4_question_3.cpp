#include<bits/stdc++.h>
using namespace std;
#define ll long long int     
int main()
{ ll i,n,x,y;
   cout<<"Enter Size of Array :"<<"\n";
   cin>>n;
   vector<ll>arr(n+1);
    cout<<"Enter Elements of Array :"<<"\n";
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"Enter X and Y :"<<"\n";
   cin>>x>>y;
   ll min=0;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==x)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(arr[j]==y)
                {
                    if(min>j-i || min==0)
                    {min=j-i;
                    break;
                    }
                }
            }
        }
        else if(arr[i]==y)
        {
            for(long long int j=i+1;j<n;j++)
            {
                if(arr[j]==x)
                {
                    if(min>j-i || min==0)
                    {min=j-i;
                     break;
                    }
                }
            }
        }
    }
    cout<<"minimum distance between X and Y is ";
	cout<<min<<"\n";
    
    return 0;
}
