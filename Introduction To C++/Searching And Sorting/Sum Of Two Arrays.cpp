void sumOfTwoArrays(int *a1, int n1, int *a2, int n2, int *o)
{
    if(n1==0&&n2==0)
        return;
    int m;
    if(n1>n2)
        m=n1;
    else
        m=n2;
    int i=n1-1,j=n2-1,carry=0;
    while(j>=0&&i>=0)
    {
        int carry=(o[m]+a1[i]+a2[j])/10;
        o[m]=(o[m]+a1[i]+a2[j])%10;
        o[--m]=carry;
        i--;
        j--;
    }
    for(int k=0;k<=i;k++)
        o[k+1]=a1[k];
    for(int k=0;k<=j;k++)
        o[k+1]=a2[k];
}
