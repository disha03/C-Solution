#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    
	ll i,j,k,l,c=0,n,t;
	cout<<"Enter n :"<<"\n";
    cin>>n;
    cout<<"\n";
    for(i=1;i<=n;i++)
    {
        j=i;
        while(j)
		{
	        cout<<"* ";
	        j--;    
	    }
        k=2*n-2*i;
        j=i;
        while(k)
		{
	        cout<<"  ";
	        k--;
	    }
	    while(j)
		{
	        cout<<" *";
	        j--;
	    }
        cout<<"\n";
    }
    for(i=n;i>=1;i--)
    {
        j=i;
        while(j)
		{
	        cout<<"* ";
	        j--;
        }
        k=2*n-2*i;
        j=i;
        while(k)
        {
            cout<<"  ";
            k--;
        }
        while(j)
		{
	        cout<<" *";
	        j--;
        }
        cout<<"\n";
    }
}
