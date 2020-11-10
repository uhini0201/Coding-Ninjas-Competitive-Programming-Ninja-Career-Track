#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,odd_sum=0,even_sum=0;
    cin >> n;

    while(n>0){
        int rem=n%10;
        n=n/10;
        int digit = rem%2;
        if(digit==0){
            even_sum+=rem;
        }
        else{
            odd_sum+=rem;
        }
    }
    cout << even_sum << " " << odd_sum;
}
