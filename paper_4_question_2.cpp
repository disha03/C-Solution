#include<bits/stdc++.h>
using namespace std;
#define ll long long int     
int main()
{ ll i,n,k=0;
   cout<<"Enter Size of Array :"<<"\n";
   cin>>n;
   vector<ll>v(n+1);
    cout<<"Enter Elements of Array :"<<"\n";
   for(i=0;i<n;i++)
   {
       cin>>v[i];
   }
   cout<<"\n";
    for(i=0;i<v.size();i++)
    {
        if(v[abs(v[i])-1]>0)
        {
            v[abs(v[i])-1]=(-v[abs(v[i])-1]);
        }
        else
		{
            cout<<abs(v[i])<<" ";
            k++;
        }
    }
     if(k==0) 
     {
     	cout<<"No duplicate element found"<<"\n";
	 }
        return 0;
}
