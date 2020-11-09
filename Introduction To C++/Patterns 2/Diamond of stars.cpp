#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int k=(n+1)/2;
    for(int i=1;i<=k;i++)
    {
        for(int j=i;j<k;j++)
        cout<<" ";
        for(int j=2*i-1;j>=i;j--)
            cout<<"*";
        for(int j=2*i-2;j>=i;j--)
            cout<<"*";
        cout<<endl;
    }
    
    for(int i=k-1;i>=1;i--)
    {
        for(int j=i;j<k;j++)
        cout<<" ";
        for(int j=2*i-1;j>=i;j--)
            cout<<"*";
        for(int j=2*i-2;j>=i;j--)
            cout<<"*";
        cout<<endl;
    }
    
}
