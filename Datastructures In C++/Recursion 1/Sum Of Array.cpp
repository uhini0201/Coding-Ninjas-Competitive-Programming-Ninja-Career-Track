int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
	int sum=0;
    for(int i=0;i<n;i++){
        sum+=input[i];
    }
    return sum;
}
