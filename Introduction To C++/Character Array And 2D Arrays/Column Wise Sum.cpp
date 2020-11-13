#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int m,n;
    cin >> m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    int sum[n];
    for(int j=0;j<n;j++){
        sum[j]=0;
        for(int i=0;i<m;i++){
            sum[j]+=arr[i][j];
        }
    }
    for(int i=0;i<sizeof(sum)/sizeof(sum[0]);i++){
        cout<<sum[i]<<" ";
    }
}


