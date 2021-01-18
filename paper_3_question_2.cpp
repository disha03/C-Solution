#include<bits/stdc++.h>
using namespace std;
int main() 
{
  
    	cout<<"Enter Size of Array :"<<"\n";
	    int n;
        cin >> n;
        int arr[n];
        cout<<"Enter elements of array :" <<"\n";
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }
        int d;
        cout<<"Enter d :";
        cin >> d;
        reverse(arr,arr+d);			//in-built reverse function
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);
        cout<<"Rotating array by d elements :" <<"\n";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout << "\n";
        
}
