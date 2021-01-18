#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool com(ll x, ll y) 
{ 
    return abs(x) < abs(y); 
} 
int main() {
	ll i,j,n,h,mini;
	cout<<"Enter size of array :"<<"\n";
	    cin>>n;
	    mini=INT_MAX;
	vector<ll>v(n);
	cout<<"Enter elements of array :" <<"\n";
	for(i=0;i<n;i++)
	{
	    cin>>v[i];
	}
	int a,b;
	sort(v.begin(),v.end(),com);
	for(i=0;i<n-1;i++)
	{
	    if (mini>=abs(v[i]+v[i+1]))
	    {
	        //h=v[i]+v[i+1];
	        a=v[i];
	        b=v[i+1];
	        mini=abs(h);
	    }
	    
	}
	cout<<"Two elements whose sum is closest to zero are "<<a<<" and "<<b<<"\n";
	return 0;
}
