#include<iostream>
using namespace std;

int main() {
	int n,i=1,j=1;
    cin>>n;
    for(;i<=n;)
    {
        long long ans=3*j+2;
        j++;
        if(ans%4==0)
        continue;
        cout<<ans<<" ";
        i++;
    }
}
