void sortZeroesAndOne(int *a, int n)
{
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(a[j]==1&&a[i]==0)
        {
            a[i]=1;
            a[j]=0;
        }
        if(a[j]==0)
            j++;
    }
}
