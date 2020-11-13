void rotate(int *input, int d, int n)
{
    //Write your code here
    int p[d];
    for(int i=0;i<d;i++){
        p[i]=input[i];
    }
        
    for(int i=d;i<n;i++){
        input[i-d]=input[i];
    }
    for(int i=n-d;i<n;i++)
    	input[i]=p[i-(n-d)];
}
