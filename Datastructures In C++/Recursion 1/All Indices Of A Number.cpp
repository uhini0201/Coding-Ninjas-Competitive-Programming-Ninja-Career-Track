int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
	int k;
    if(size==0){
        return 0;
    }
    int z;
    z=allIndexes(input+1,size-1,x,output);
    if(input[0]==x){
        for(k=z-1;k>=0;k--){
            output[k+1]=output[k]+1;
        }
        output[0]=0;
        z++;
    }
    else{
         for(k=z-1;k>=0;k--){
        		output[k]=output[k]+1;
    	}
    }
   
    return z;
    
}
