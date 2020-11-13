void printSubstrings(char str[]){
  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
   */

	int n=0,i=0;
    while(str[i]!='\0'){
        n++;
        i++;
    }
    int k,j;
    for(i=0;i<n;i++){
        for(j=i;j<=n;j++){
            for(k=i;k<j;k++){
                cout<<str[k];
            }
            cout<<endl;
        }
        
    }
}
