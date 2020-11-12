#include<iostream>
using namespace std;


int main(){
int n;
    cin>>n;
    if(n==0)
        return 0;
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=n-i+1;j++)
          cout<<j;
      int k=2;
      while(k--){
      for(int j=n-i+1;j<n;j++)
          cout<<"*";
      }
      for(int j=n-i+1;j>=1;j--)
      {
          cout<<j;
      }
      cout<<endl;
  }
}
