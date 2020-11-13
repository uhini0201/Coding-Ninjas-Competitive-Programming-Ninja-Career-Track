int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int min = input[0],id;
    if(size==0){
        return 0;
    }
    for(int i=0;i<size;i++){
        if(min>input[i]){
            min=input[i];
            id=i;
        }
    }
    return id;
}
