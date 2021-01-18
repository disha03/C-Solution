#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

	ll i,j,k,l,c=0,n,t;
	cout<<"Enter Size of Array :"<<"\n";
	    cin>>n;
	    vector<ll>v(n),a;
	    cout<<"Enter elements of array :" <<"\n";
	    for(i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    a.push_back(v[n-1]);
	    k=v[n-1];
	    for(i=n-2;i>=0;i--)
	    {
	     if(v[i]>=v[i+1])
	     {
	        if(v[i]>=k){
	             a.push_back(v[i]);
	             k=max(v[i],k);
	        }
	         
	     }
	    }
	    cout<<"Leaders in the array :  ";
	    for(i=a.size()-1;i>=0;i--)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";
		return 0;
}
