#include <bits/stdc++.h>
using namespace std;
 priority_queue<int>maxi;
 priority_queue<int,vector<int>,greater<int> >mini;

vector<double>Median(vector<int> a) {
    vector<double>result;
    for(int i=0;i<a.size();i++){
    int num=a[i];
        if(maxi.empty() || num < maxi.top())
            maxi.push(num);
        else
            mini.push(num);

        if(maxi.size() > mini.size() + 1)
        {
            mini.push(maxi.top());
            maxi.pop();
        }

        if(mini.size() > maxi.size() + 1)
        {
            maxi.push(mini.top());
            mini.pop();
        }
        if(maxi.size() == mini.size())
            result.push_back((maxi.top() + mini.top())*0.5);
        else if(maxi.size() > mini.size())
            result.push_back(maxi.top());
        else
            result.push_back(mini.top());
}
return result;
}

int main()
{
   int i,j,k,t,n;
   cout<<"Enter Size of Array :"<<"\n";
   cin>>n;
    // size of array or total number of input elements
   vector<int>a(n+1);
   //assumed integers are stored in array 
   cout<<"Enter elements of array :" <<"\n";
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
    
    vector<double> result = Median(a);
    cout<<"Median in a stream of integers are : ";
    for(i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }

    return 0;
}
