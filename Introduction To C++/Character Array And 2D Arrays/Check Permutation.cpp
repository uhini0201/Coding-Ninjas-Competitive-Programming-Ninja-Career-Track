// input1 - first input string
// input2 - second input string
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
	    int h[27]={0},i=0,n=0,m=0;
    while(input1[i]!='\0'){
        n++;
        i++;
    }
    i=0;
	while(input2[i]!='\0'){
        m++;
        i++;
    }
    if(m==0 || n==0){
        return false;
    }
	if(m!=n){
        return false;
    }
    else{
         for(i=0;i<n;i++){
        	h[input1[i]-97]=1;
    }
    i=0;
    while(input2[i]!='\0'){
        if(h[input2[i]-97]!=1){
            
            return false;
        }
        i++;
    }
    return true;

    }
   
}
