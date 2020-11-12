void swapAlternate(int *a, int n)
{
    int k=a[n-1];
    for(int i=0;i<n;i+=2)
        {swap(a[i],a[i+1]);}
    if(n%2==1)
        a[n-1]=k;
}
