void trimSpaces(char input[]) {
	int i=0;
    int j=0;
    i=0;
    while(input[i]!='\0'){
        if(input[i]!=' '){
            input[j++]=input[i];
        }
        i++;
    }
    input[j]='\0';
}
