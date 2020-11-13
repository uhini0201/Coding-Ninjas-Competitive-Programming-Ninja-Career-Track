// input - given string
char highestOccurringChar(char input[]) {
    // Write your code here
	int h[26]={0},h1[26],i=0,n=0;
    for(i=0;i<26;i++){
        h1[i]=-1;
    }
    while(input[i]!='\0'){
        n++;
        i++;
    }
     for(i=0;i<n;i++){
         
		 h[input[i]-97]++;
         if(h1[input[i]-97]==0){
             h[input[i]-97]=i;
         }
	}
    int j=-100000,mini=100000;
    char k;
    i=0;
    while(i<26){
        if(h[i]>=j){
            if(j==h[i]){
                if(h1[i]<mini){
                    mini=h1[i];
                    j=h[input[mini]];
            		k=input[mini];
                }
            }
            j=h[i];
            k=i+97;
        }
        i++;
    }
    return k;
}
