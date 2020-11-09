#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i;
        }
        
    }
    cout << sum;
  
}


