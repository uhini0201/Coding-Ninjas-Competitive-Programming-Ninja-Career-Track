#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n , i , j , k =1;
    cin >> n;
    for(i = 1 ; i <= n ; i++){
        j = i;
        for(k = 1 ; k <= i ; k++){
            cout << j++;
        }
        cout << endl;
    }
}


