void insertionSort(int *input, int size)
{
    //Write your code here
    int i,j,swp;
    for(i=1;i<size;i++){
      swp = input[i];
        j=i-1;
        while(j>=0 && input[j] > swp){
            input[j+1]=input[j];
            j=j-1;
        }
        input[j+1]=swp;
    }
}
