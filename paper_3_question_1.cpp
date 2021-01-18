#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void union_array(vector<ll>a,vector<ll>b,ll n,ll m)
{
    int i;
    set<ll>s;
    set<ll>:: iterator it;
    for(i=0;i<n;i++)
    {
    	s.insert(a[i]);
	}
	for(i=0;i<m;i++)
    {
    	s.insert(b[i]);
	}
    
    for(it=s.begin();it!=s.end();it++)
		{
			cout<<*it<<" ";
		}
}
void intersection_array(vector<ll>a,vector<ll>b,ll n,ll m)
{
    int a_i=0,b_i=0,k=0;
    set<ll>s;
    set<ll>:: iterator it;
    while(a_i<n && b_i<m)
    {
        if(a[a_i]>b[b_i])
        {
            b_i++;
        }
        else if(a[a_i]<b[b_i])
        {
            a_i++;
        }
        else{
            s.insert(a[a_i]);
            a_i++;
            b_i++;
            k++;
        }
    }
    if(k==0)
    {
    	cout<<"Intersection is NULL";
	}
	else{
		for(it=s.begin();it!=s.end();it++)
		{
			cout<<*it<<" ";
		}
	}
}
int main() {
    
	ll i,j,k,l,c=0,n,t,m;
	cout<<"Enter Size of Both Array's' :"<<"\n";
    cin>>n>>m;   //size of both sorted array
    vector<ll>a(n+1),b(m+1);
    cout<<"Enter elements of array A :" <<"\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter elements of array B:" <<"\n";
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cout<<"Union of two sorted array are"<<"\n";
	union_array(a,b,n,m);
	cout<<"\n";
	cout<<"Intersection of two sorted array are"<<"\n";
    intersection_array(a,b,m,n);
}
