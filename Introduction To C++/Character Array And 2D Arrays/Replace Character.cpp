void replaceCharacter(char input[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
    int i=0,n=0;
    while(input[i]!='\n'){
        n++;
        i++;
    }
    for(i=0;i<n;i++){
        if(input[i]==c1){
            input[i]=c2;
        }
    }
}
