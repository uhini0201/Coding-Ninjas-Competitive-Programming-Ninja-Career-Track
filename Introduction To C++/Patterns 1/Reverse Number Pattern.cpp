#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n , i , j,k;
    cin >> n;
    for(i=1;i<=n;i++){
        k=i;
        for(j=1;j<=i;j++){
            cout<<k--;
        }
        cout<<endl;
    }
  
}
