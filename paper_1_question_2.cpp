#include <bits/stdc++.h>
using namespace std;

int main()  
{  
    long long int i,j,n, first_smallest, second_smallest;  
    cout<<"Enter Size of Array :"<<"\n";
    cin>>n;
    vector<long long int>v(n+1);
    cout<<"Enter elements of array :" <<"\n";
    for(i=0;i<n;i++)
    {
    	cin>>v[i];
	}
    if (n < 2)  
    {  
        cout<<"Invalid";   
    }  
    else
    {
        first_smallest = second_smallest = INT_MAX;  
        for (i = 0; i < n ; i ++)  
        {  
            if (v[i] < first_smallest)  
            {  
                second_smallest = first_smallest;  
                first_smallest = v[i];  
            }  
            else if (v[i] < second_smallest && v[i] != first_smallest)  
                second_smallest = v[i];  
        }  
        if (second_smallest == INT_MAX)  
            cout << "No second smallest element\n";  
        else
            cout << "First smallest element of array is " << first_smallest << " and second smallest element is " << second_smallest << endl;  
    }
     return 0;
}  
  
