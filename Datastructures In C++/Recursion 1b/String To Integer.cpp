int len(char str[]){
    int n=0;
    while(str[n]!='\0'){
        n++;
    }
    return n;
}

int stringToNumber(char input[]) {
    // Write your code here
	int n=len(input);
    
    if(n==1){
        return input[0]-'0';
    }
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=input[i]-'0';
    }
   int z=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
         if (num != 0) {
        while (num > 0) {
           z *= 10;
            num /= 10;
        }
        z += arr[i];
    } else {
        z *= 10;
    }
}
    return int(z);
    }

