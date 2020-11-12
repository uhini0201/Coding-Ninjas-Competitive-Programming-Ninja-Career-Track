void arrange(int *a, int n)
{
    int j=1,k;
    if(n%2==1)
     k=n/2;
    else
        k=(n/2)-1;
    for(int i=0;i<=k;i++)
    {  a[i]=j;
    j+=2;
    }
    if(n%2==1)
     j=n-1;
    else
        j=n;
    for(int i=k+1;i<n;i++)
    {
        a[i]=j;
        j-=2;
    }
    return;
}
