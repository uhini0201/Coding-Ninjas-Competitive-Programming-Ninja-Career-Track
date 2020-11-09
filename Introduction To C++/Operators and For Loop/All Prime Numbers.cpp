#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {cout<<"0";return 0;}
    for(int i=2;i<=n;i++)
    {
        int c=0;
        for(int j=1;j<=n;j++)
        {
            if(i%j==0)c++;
         }
        if(c==2)
            cout<<i<<endl;
    }

    return 0;
}
