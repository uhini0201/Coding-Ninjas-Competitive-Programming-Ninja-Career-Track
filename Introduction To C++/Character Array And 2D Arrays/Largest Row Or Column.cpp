void findLargest(int **a, int r, int c)
{
    if(r==0&&c==0)
    {
        cout<<"row 0 "<<-2147483648;
        return;
    }
    int maxi=-2147483648,maxi1=maxi,row,column;
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum+=a[i][j];
        }
        if(maxi<sum)
        {maxi=sum;row=i;}
    }
    for(int i=0;i<c;i++)
    {
        int sum=0;
        for(int j=0;j<r;j++)
            sum+=a[j][i];
        if(maxi1<sum)
        {maxi1=sum;column=i;}
    }
   
    if(maxi>=maxi1)
    {
        cout<<"row "<<row<<" "<<maxi;
        return;
    }
    if(maxi<maxi1)
    {
        cout<<"column "<<column<<" "<<maxi1;
        return;
    }
}
