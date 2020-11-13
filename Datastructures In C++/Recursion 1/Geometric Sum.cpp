double geometricSum(int k) {
    // Write your code here
	
    if(k==0){
        return 1;
    }
     int p=pow(2,k);
    return ((double)1/p + geometricSum(k-1));

}
