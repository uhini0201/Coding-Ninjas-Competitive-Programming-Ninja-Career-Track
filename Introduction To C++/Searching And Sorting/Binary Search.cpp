int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start = 0;
    int end = n;
    
    while(start<=end){
        int mid = (start+end )/2 ;
        if(val < input[mid]){
            end = mid - 1;
        }
        else if(val > input[mid]){
            start = mid + 1;
        }
        else{
            return mid;
        }

    }
    return -1;
}
