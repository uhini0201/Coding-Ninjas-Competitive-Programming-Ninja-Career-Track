// Change in the given string itself. So no need to return or print anything
int length(char str[]){
    int n=0;
    while(str[n]!='\0'){
        n++;
    }
    return n;
}



void replacePiHelp(char str[],int st,int n){
   
    
    if(str[st]=='\0' ){
        return;
    }
    
    if(str[st]=='p' && str[st+1]=='i'){
        for(int i=n;i>=st+2;i--){
            str[i+2]=str[i];
        }
        str[st]='3';
        str[st+1]='.';
        str[st+2]='1';
        str[st+3]='4';
         replacePiHelp(str,st+4,n+2);
    }
    else
        replacePiHelp(str,st+1,n);
}


void replacePi(char input[]) {
	// Write your code here
	replacePiHelp(input,0,length(input));
}

