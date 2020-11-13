void pushZeroesEnd(int *input, int size)
{
    //Write your code here
     //Write your code here
   int c=0,i;
    for(i=0;i<size;i++){
        if(input[i]!=0){
            input[c]=input[i];
            c++;
        }
    }
    while(c<size){
        input[c]=0;
        c++;
    }
}
