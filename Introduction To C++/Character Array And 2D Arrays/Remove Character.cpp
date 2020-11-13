// input - given string
// You need to remove all occurrences of character c that are present in string input.
// Change in the input itself. So no need to return or print anything.

void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
	int i=0,n=0;
    while(input[i]!='\0'){
        n++;
        i++;
    }
    int j;
    for(i=j=0;i<n;i++){
        if(input[i]!=c){
            input[j++]=input[i];
        }
    }
    input[j]='\0';
}
