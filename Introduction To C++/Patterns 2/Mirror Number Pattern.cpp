#include<iostream>
using namespace std;
int main(){
 int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        for(int space=n-i;space>=1;space--)
            cout<<" ";
        
        for(int j=1;j<=i;j++)
            cout<<j;
        
        cout<<endl;     
    }  
}
