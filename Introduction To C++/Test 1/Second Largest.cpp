#include<iostream>
using namespace std;
#include <climits>


int main(){
    int max1=INT_MIN,max2=INT_MIN;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>max1)
        {
            max2=max1;
            max1=x;
        }
        else if(x<max1&&x>max2)
        {
            max2=x;
        }
    }
    cout<<max2;
}


