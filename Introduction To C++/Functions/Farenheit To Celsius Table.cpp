void printTable(int start, int end, int step) {
    for(int i=start;i<=end;i+=step)
    {
      int val=((i-32)*5)/9;
        cout<<i<<" "<<val<<endl;
    }
    return;
    
}


