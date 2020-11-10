#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    int c1=0,c2=0;
    for(int i=1;i<n;i++)
    {
       cin>>arr[i];
        if(arr[i]<arr[i-1])
            c1++;
        
            if(arr[i]>arr[i-1])
            c2++;
        
    }
    if(c1==n-1||c2==n-1)
    {
        cout<<"true";
        return 0;
    }
    if(arr[0]>arr[1]&&arr[n-1]>arr[n-2])
    {
        int i;
        for( i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1])
                break;
            if(arr[i]==arr[i+1])
            {
                cout<<"false";
                return 0;
             }
        }
        i=i+1;
        int j;
        for(j=i;j<n;j++)
        {
            if(arr[j]<=arr[j-1])
            {
                cout<<"false";
                return 0;
            }
        }
        cout<<"true";
    }
	else
        cout<<"false";
}
