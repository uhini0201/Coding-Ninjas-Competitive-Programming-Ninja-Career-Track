#include<iostream>
using namespace std;

int main(){

    int a1=0,a2=0,a3=0;
    while(true)
    {
        char c;
        c=cin.get();
        if(c=='$')
        break;
        if(c>=97&&c<=122)
            a1++;
        else if(c>='0'&&c<='9')
            a2++;
        else
            a3++;
    }
    cout<<a1<<" "<<a2<<" "<<a3;
  
}
