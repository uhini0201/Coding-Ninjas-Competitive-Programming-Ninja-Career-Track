int findSecondLargest(int *input, int n)
{
    //Write your code here
    int i , j , temp=-2147483648 ,z=-2147483648 ;
    if(n<=1){
        return -2147483648 ;
    }
    for(i=0;i< n;i++){
        if(input[i]>temp){
            z=temp;
            temp=input[i];
        }
        if(input[i]>z && input[i]!=temp){
            z=input[i];
        }
    }
    if(z==-2147483648 ){
        return -2147483648 ;
    }
    else{
        return z;
    }
}
    
