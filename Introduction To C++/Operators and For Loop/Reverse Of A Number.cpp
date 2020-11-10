#include<iostream>
using namespace std;

int main() {
	int n,m;
    cin>>n;
m=0;
    while(n>0)
    {
        m=m*10+n%10;
        n=n/10;
    }
    cout<<m;
}
