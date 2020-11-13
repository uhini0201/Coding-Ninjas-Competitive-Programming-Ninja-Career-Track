void bubbleSort(int *input, int size)
{
    //Write your code here
    int i , j , temp;
    if(size ==0){
        return;
    }
    for(i=0;i< size;i++){
        for(j=0;j< size-i-1;j++){
            if(input[j]>input[j+1]){
                temp = input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
}
