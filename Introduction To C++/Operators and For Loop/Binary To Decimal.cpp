#include<iostream>
using namespace std;

int main() {
	int n,i=0;
    cin>>n;
    int m=0;
    while(n>0)
    {
        int r=n%10;
        
            m=m+(r<<i);
        i++;
        n/=10;
    }
    cout<<m;
	
}
