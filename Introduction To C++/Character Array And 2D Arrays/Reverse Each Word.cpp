// input - given string
// Update in the given input itself. No need to return or print anything

void reverseEachWord(char input[]) {
    // Write your code here
    int i=0,n=0;
    char k;
	 while(input[i]!='\0'){
        n++;
        i++;
    }
    int j=0,m,z;
    for(i=0;i<=n;i++){
        if(input[i]==' '|| input[i]=='\0'){
            for(m=j,z=i-1;m<(i+j)/2;m++,z--){
                k=input[m];
                input[m]=input[z];
                input[z]=k;
            }
            j=i+1;
        }
    }

}
