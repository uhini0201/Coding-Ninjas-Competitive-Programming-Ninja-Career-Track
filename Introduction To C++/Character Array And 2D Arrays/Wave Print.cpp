void wavePrint(int **input, int nRows, int mCols)
{
    //Write your code here
    int m=nRows,n=mCols;
   for(int j=0;j<n;j++){
       if(j%2==0){
           for(int i=0;i<m;i++){
           		 cout<<input[i][j]<<" ";
           }
              
        }
		else{
            for(int i=m-1;i>=0;i--){
                cout<<input[i][j]<<" ";
            }
                
           }
       
   }
}
