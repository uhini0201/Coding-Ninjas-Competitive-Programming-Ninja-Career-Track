// input - given string
// You need to update in the input string itself. No need to return or print anything

void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
	int i=0,n=0;
    while(input[i]!='\0'){
        n++;
        i++;
    }
    if(n<2){
        return;
    }
    int j=0;
    for(i=1;i<n;i++){
        if(input[j]!=input[i]){
            j++;
            input[j]=input[i];
        }
    }
    j++;
    input[j]='\0';
}
