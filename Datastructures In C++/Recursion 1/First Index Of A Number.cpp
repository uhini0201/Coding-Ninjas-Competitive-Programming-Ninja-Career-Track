int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if(input[0]==x){
        return 0;
    }
        if(size<=0){
        	return -1;
    	}
  	int z=firstIndex(input+1,size-1,x);
    if(z<0){
        return z;
    }
    return 1+ z;
}
