#include<iostream>
using namespace std;

int main() {
	int n,i=0,m;
    cin>>n;
    m=n;
    string s="";
    while(n>1)
    {
        i++;
        n=n/2;
    }
    for(int j=i;j>=0;j--)
    {
        if(((1<<j)&m)==0)
            s+='0';
        else
            s+='1';
    }
    cout<<s;
}
