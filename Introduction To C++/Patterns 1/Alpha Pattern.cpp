#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n,i,j;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<< (char)('A'+i);
        }
        
        cout<<endl;
    }
    
}
