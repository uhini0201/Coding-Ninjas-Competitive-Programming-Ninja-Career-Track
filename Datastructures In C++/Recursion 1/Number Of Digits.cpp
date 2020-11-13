int count(int n){
   int i=0;
    if(n!=0){
        i++;
        return i+count(n/10);
    }
    return 0;
}
