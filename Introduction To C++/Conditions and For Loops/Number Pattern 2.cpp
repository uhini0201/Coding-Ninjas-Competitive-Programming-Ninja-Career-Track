#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    
  	int n , i , j , k ;
    cin >> n;
    for(i=1; i<= n; i++){
        j=i;
        int m = n-i ; 
        if(m>=1){
            cout << " ";
            m--;
        }
        for(k=1;k<=i;k++){
            cout << j++;
        }
        cout << endl;
    }
}
