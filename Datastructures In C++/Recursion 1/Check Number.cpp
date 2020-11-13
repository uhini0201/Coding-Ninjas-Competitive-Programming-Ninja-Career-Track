bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
	int i=0;
 	while(i<size){
        if(x==input[i++]){
            return true;
        }
    }
    return false;
}
