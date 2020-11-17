#include <iostream>
using namespace std;

void print2DArray(int **a, int n, int m) {
	for(int i=0;i<n;i++)
    {
        for(int k=i;k<n;k++){
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        }
    }

}


