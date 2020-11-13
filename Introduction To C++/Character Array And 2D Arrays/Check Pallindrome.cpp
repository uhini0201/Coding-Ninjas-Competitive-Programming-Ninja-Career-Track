bool isPalindrome(string str){


  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */

	int n=0;
    for(int i=0;str[i]!='\0';i++){
        n++;
    }
    int i=0;
    n--;
    while(i<=n/2){
        if(str[i]!=str[n-i]){
            return false;
        }
        i++;
        n--;
    }
    return true;
}
