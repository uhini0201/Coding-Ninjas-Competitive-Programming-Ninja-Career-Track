#include<iostream>
using namespace std ;

int main()
{
int n;
cin>>n;

int output=0;
while(output*output<=n){
    output=output+1;
}
output=output-1;
cout<< output;


}
