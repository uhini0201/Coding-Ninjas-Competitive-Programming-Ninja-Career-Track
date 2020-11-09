#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int c;
    cin>>c;
    if(c!=1&&c!=2)
    {cout<<"-1";return 0;}
    if(c==1)
    {
        cout<<n*(n+1)/2;
    }
    if(c==2)
    {
       long long fact=1;
        for(int i=1;i<=n;i++)
            fact*=i;
        cout<<fact;
    }
    return 0;
	
}
